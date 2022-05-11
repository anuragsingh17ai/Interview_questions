
//......... phinix99

#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int a[10][10];
memset(a,0,sizeof(a));

for(int i=1;i<=3;i++)
	for(int j=1;j<=3;j++)
		cin>>a[i][j];
		
for(int i=1;i<=3;i++){
	for(int j=1;j<=3;j++){
		if((a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j])%2==0)
			cout<<"1";
		else 
			cout<<"0";
					    }
	cout<<"\n";		
}
}
