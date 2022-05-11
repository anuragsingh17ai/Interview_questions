#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int s;
	cin>>s;
	if(s%2==1)
		cout<<-1;
	else
	{
		for(int i=1;i<=s;i+=2)
			cout<<i+1<<" "<<i<<" ";
	}
	return 0;
}
