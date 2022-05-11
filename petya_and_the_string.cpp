#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	string s,t;
	cin>>s>>t;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	transform(t.begin(),t.end(),t.begin(),::tolower);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]<t[i])
		{
			cout<<"-1\n";
			return 0;
		}
		else if(s[i]>t[i])
		{
			cout<<"1\n";
			return 0;
		}
	}
	cout<<0<<"\n";
	return 0;
}
