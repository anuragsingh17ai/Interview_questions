#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n>>m;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end());
	
	vector<int> v1;
	for(int i=1;i<n;i++)
	{
	int dif=0;
	for(int j=0;j<m;j++)
		dif+=(v[i][j]-v[i-1][j]);
	v1.push_back(dif);
	}	
	cout<<*min_element(v1.begin(),v1.end())<<"\n";
	}
}
