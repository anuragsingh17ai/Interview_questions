#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,a1;
	cin>>t;
	vector<int> a;
	for(int i=0;i<t;i++)
	{
		cin>>a1;
		a.pb(a1);
	}
	int min=INT_MAX,p1,p2,i=0;
	while(true)
	{
			if(i==t-1)
			{	if(min>abs(a[i]-a[0]))
				{p1=i;p2=0;
				}
				break;
			}
			else if(abs(a[i+1]-a[i])<min)
			{ min=abs(a[i+1]-a[i]);
				p1=i;p2=i+1;
			}
			i++;
	}
	cout<<p1+1<<" "<<p2+1<<"\n";
	return 0;
}
				
		
		
