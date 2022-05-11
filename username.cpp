#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,cnt=0;
cin>>t>>n;

int max=n,min=n;
for(int i=1;i<t;i++)
{
	cin>>n;
	if(min>n)
	{
		min=n;cnt++;
	}
	else if(max<n)
	{
		max=n;cnt++;
	}
}
cout<<cnt<<"\n";
return 0;
}
