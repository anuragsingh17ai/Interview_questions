#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.length()<7)
	{
		cout<<"NO\n";return 0;
	}
	int cnt=0;
	for(int i=1;i<s.size();i++)
	{
		
		if(s[i]==s[i-1])
			cnt++;
		else
			cnt=0;
		if(cnt==6)
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
