#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
unordered_set<char> se;
for(int i=0;i<s.length();i++)
	se.insert(s[i]);
if(se.size()%2==1)
	cout<<"IGNORE HIM!\n";
else
	cout<<"CHAT WITH HER!\n";
return 0;
}
	
