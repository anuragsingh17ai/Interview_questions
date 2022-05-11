#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=INT_MIN,a,b,t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		t+=b;
		t-=a;
		if(t>k)
			k=t;
	}
	cout<<k<<"\n";
	return 0;
}
	
