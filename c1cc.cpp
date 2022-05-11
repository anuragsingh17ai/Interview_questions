#include<bits/stdc++.h>
using namespace std;
int solve()
{	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float a,b,c,p,q,r;
	cin>>a>>b>>c>>p>>q>>r;
	if(a+b+c>(p+q+r)/2){
		cout<<"Yes\n";
					}
	else{
		if(b+c+p>(p+q+r)/2)
			cout<<"YES\n";
		else if (a+q+c>(p+q+r)/2)
			cout<<"YES\n";
		else if (a+b+r>(p+q+r)/2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
		}
	return 0;
}
