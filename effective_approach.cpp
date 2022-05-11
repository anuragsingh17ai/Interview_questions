//This is the phinix99................

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,s=0,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s+=a;
	} 
	int p=(s%(n+1));// - -
	int cnt=0;
	for(int i=1;i<=5;i++){
		p+=1;
		if(p>n+1)
		{
			p=1;
		}
		else if (p!=1)
		{	cnt++;
				}
			    }
	cout<<cnt<<"\n";
	return 0;
}
