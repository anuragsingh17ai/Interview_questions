#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll n;
	string s;
	unordered_map<string,int> m;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		if(m[s]){
			cout<<s<<m[s]<<"\n";
			m[s]++;
				}
		else{
			cout<<"OK"<<"\n";
			m[s]=1;
			}
	}
	
	
	return 0;
}
