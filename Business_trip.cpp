#include<bits/stdc++.h>
#define for(i,a,b) for(int i=a;i<b;i++)
#define pb push_back

using namespace std;
int main()
{
	int n,cnt=0,sum=0;
	cin>>n;
	
	vector<int> v;
	
	for(i,0,12)
	{ 
		int p; 
		cin>>p;
		v.pb(p);
	}
	
	sort(v.rbegin(),v.rend());
	
	for(i,0,12)
	{
		if(sum>=n)
				break;
		sum+=v[i];
		cnt++;
	}
	sum>=n?cout<<cnt:cout<<-1;
	return 0;
}
