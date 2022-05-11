#include<bits/stdc++.h>
#define for(i,a1,b1) for(int i=a1;i<=b1;i++)

using namespace std;
int main()
{                             // maximum a;
	int cnt=0,n,m,b;         //if b=0 then a=root(n);
	cin>>n>>m;
	
	for(a,0,sqrt(n))
	{
		b=n-a*a;
		if((a+(b*b))==m)
			cnt++;
	}
	cout<<cnt<<"\n";
}
