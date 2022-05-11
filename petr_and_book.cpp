#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,p[8];
	cin>>t;
	for(int j=1;j<8;j++)
		cin>>p[j];
	int i=1;
	while(true)
	{	if(t<=0)
			break;
		else if(i>7)
			i=1;
		else{
			t-=p[i];
			i++;}
	}
	cout<<i-1<<"\n";
	return 0;
}
