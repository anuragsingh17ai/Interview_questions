#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	string p;
	cin>>p;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
