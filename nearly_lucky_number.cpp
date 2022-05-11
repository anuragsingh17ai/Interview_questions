#include<bits/stdc++.h>
using namespace std;
int main()
{
map<char,int>s;
string s1;
cin>>s1;
for(int i=0;s1[i]!='\0';i++)
{
	if(s.find(s1[i])==s.end())
		s[s1[i]]=1;
	else
		s[s1[i]]+=1;
}
int cnt=s['4']+s['7'];
cnt==4 || cnt==7?cout<<"YES":cout<<"NO";
		
}
