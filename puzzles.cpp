#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,av;
	cin>>n>>av;
	vector<int> v(av);
	
	for(int i=0;i<av;i++)
		cin>>v[i];
	
	sort(v.begin(),v.end());
	
	int diff=INT_MAX;
	for(int i=0;i<=av-n;i++)
	{
		if(diff>v[i+n-1]-v[i])
			diff=v[i+n-1]-v[i];
	}
	cout<<diff<<endl;
	return 0;
}
