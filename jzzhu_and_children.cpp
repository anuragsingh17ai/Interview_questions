#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float n,t,max=0,a;
	cin>>n>>t;
	int position;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		a=ceil(a/t);
		if(max<=a)
		{ max=a;
			position=i+1;
		}
	}
	cout<<position<<"\n";
}
			
		
