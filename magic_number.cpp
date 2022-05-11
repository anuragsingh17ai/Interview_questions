#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string n;
	cin>>n;
	rep(i,0,n.size())
	{
		if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4')
			i+=2;
		
		else if(n[i]=='1' && n[i+1]=='4')
			i+=1;
		else if(n[i]=='1')
			continue;
		else{
			cout<<"NO\n";
			return 0;
			}
	}
	cout<<"YES\n";
	return 0;
}
	
