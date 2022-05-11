#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,z=0,o=0,z1=0,o1=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{	int a,b;
		cin>>a>>b;
		a==1?o++:z++;
		b==1?o1++:z1++;
	}
	int ans=0;
	o<z?ans=o:ans=z;
	o1<z1?ans+=o1:ans+=z1;
	cout<<ans;
	return 0;
}
