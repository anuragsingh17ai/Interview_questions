#include<bits/stdc++.h>
using namespace std;

// .......phinix99......

int algo()
{
	string s,t;
	cin>>s>>t;
	int n= s.size();
	int m=t.size();
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(s[j]!=t[j-i]) break;
	
								 }
	cout<<"YES"<<"\n";
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		algo();
	return 0;
}
