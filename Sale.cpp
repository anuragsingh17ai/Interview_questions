#include<bits/stdc++.h>
#define for(i,a,b) for(int i=a;i<b;i++)

using namespace std;
int main()
{
	int n,m,k,sum=0;
	cin>>n>>m;
	vector<int> v(n);
	for(i,0,n)
	{
		cin>>k;
		v.push_back(k);
	}
	
	sort(v.begin(),v.end());
	
	for(i,0,m)
		sum+=abs(v[i]);
	
	cout<<sum;
}
	
