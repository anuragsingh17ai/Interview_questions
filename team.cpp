#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		a=a+b+c;
		if(a>=2)
			cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
}
