#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m,a=0,b,time=0;
	cin>>n>>m;
	rep(i,0,m)
	{
			cin>>b;
			if(a>b)
				time=time+(n-a)+b;
			else if(a==b)
				time+=0;
			else
				time+=(b-a);
			a=b;
	}
	cout<<time-1<<"\n";
	return 0;
}
