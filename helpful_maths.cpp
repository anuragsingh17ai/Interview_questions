#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> v;
	string n;
	cin>>n;
	for(int i=0;i<n.size();i+=2)
		v.pb(n[i]-'0');
	
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{	cout<<v[i];
		if(i!=v.size()-1)
			cout<<'+';
	}
	return 0;
}
