#include<bits/stdc++.h>
#define for(i,a,b) for(int i=a;i<b;i++)
int const N=1e4+10;

using namespace std;
int main()
{
	int n,m,a[N],k;
	vector<int> b;
	cin>>n;

	for(i,0,n)
		cin>>a[i];

	cin>>m;
	for(j,0,m)
	{
		cin>>k;
		for(i,0,n)
		{
			if(k%a[i]==0)
				b.push_back(k/a[i]);
		}
	}
	int ma=*max_element(b.begin(),b.end());
	cout<<count(b.begin(),b.end(),ma);
}
	
