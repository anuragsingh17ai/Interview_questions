#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int a,b,cnt=0,nextprime;
cin>>a>>b;
nextprime=a+1;
while(true)
{
for(int i=2;i<=nextprime;i++)
{	if(nextprime%i==0)
	{	cnt++; }
}
if(cnt==1)
{	nextprime==b?cout<<"YES\n":cout<<"NO\n";
	return 0;
}
else
{ nextprime+=1;cnt=0;
}
}}
