#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n,c,ch;
	int k=0;
	cin>>n>>c>>ch;
	multiset<char> s;
	for(int i=0;i<n.length();i++)
		s.insert(n[i]);
	for(int j=0;j<c.length();j++)
		s.insert(c[j]);
	sort(ch.begin(),ch.end());
	if(s.size()!=ch.size())
		cout<<"NO\n";
	else
	{
		for(auto i:s){
			if(i!=ch[k])
			{
				cout<<"NO\n";
				return 0;
			}
				k++; }
		cout<<"YES\n";
	}
	return 0;
}
			
