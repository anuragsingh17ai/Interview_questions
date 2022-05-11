#include<bits/stdc++.h>
using namespace std;
void algo()
{
	string s;
	cin>>s;
	int l=s.length();
	if(l>10)
		cout<<s[0]<<l-2<<s[l-1]<<"\n";
	else
		cout<<s<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cout.tie(0);
cin.tie(0);
int t;
cin>>t;
while(t--)	
	algo();
return 0;
}
