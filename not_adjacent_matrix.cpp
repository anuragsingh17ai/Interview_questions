#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int algo()
{
int n;
cin>>n;
int k=1;
if(n==2)  {
	cout<<-1<<"\n"; return 0;}
	
int a[n][n];			
//algo for filling element of matrix.			
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if((i+j)%2==0) {
			a[i][j]=k;
			k+=1;       }
	}
}


for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if((i+j)%2!=0)  {
			a[i][j]=k;
			k+=1;     }
	}
}

//printing matrix
for(int i=0;i<3;i++) {
	for(int j=0;j<3;j++)
		cout<<a[i][j]<<" ";
	cout<<"\n";
					 } 
return 0;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
	algo();
}
}
