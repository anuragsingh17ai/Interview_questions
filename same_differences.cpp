#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
void algo()
{                         //3 5 1 4 6 6		
	lli n,a,count=0;
	cin>>n;
	map<int,int> m;
	for(lli i=0;i<n;i++){
		cin>>a;   
		a-=i;                  // 3  m[3]=0 count=0 m[3]=1
		count+=m[a];          //  4  m[4]=0 count=0 m[4]=1
		m[a]++;         }     //  -1 m[-1]=0 count=0 m[-1] =1
		cout<<count<<"\n";    //  1  m[1]=0  count=0 m[1]=1
}                            //   2  m[2]=0  count=0 m[2]=1
	                        //    1  m[1]=1  count =1 m[1]=2
	                        //
int main()
{
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		algo();
	}
	return 0;
}
	
