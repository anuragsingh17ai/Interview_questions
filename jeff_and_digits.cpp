#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repe(i,a,b) for(int i=a;i<=b;i++)
#define mii map<int,int>
typedef long long int ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	ll cnt0,cnt5,actual;
	cin>>n;
	actual=cnt5=cnt0=0;
	rep(i,0,n)
	{	int a;
		cin>>a;
		if(a==5)cnt5++;
		else cnt0++;
		if((cnt5*5)%9==0)
			actual=cnt5;
	}
	if(actual!=0 && cnt0>0)
	{
		rep(i,0,actual)
			cout<<5;
		rep(i,0,cnt0)
			cout<<0;
	}
	else if(cnt0>0)
		cout<<0;
	else 
		cout<<-1;
	return 0;
}
	

