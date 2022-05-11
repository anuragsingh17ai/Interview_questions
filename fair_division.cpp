#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	int t;
	map<int,int> m;
	cin>>t;
	while(t--)
	{
		int n,a;
		m[1]=m[2]=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			m[a]++;
		}
		(m[1]%2==0 && m[2]%2==0)?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
