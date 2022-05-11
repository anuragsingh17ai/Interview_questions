/* 0 1
 * 0 2
 * 1 0
 * 1 1
 * 1 2
 * 1 3
 * 3 1
 * 4 2
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,cnt=0;
	cin>>n;
	vector<pair<int,int>> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i].first>>a[i].second;
	sort(a.begin(),a.end());
	for(int i=2;i<n-2;i++)
	{ int l=0,r=0,u=0,d=0;
		for(int j=0;j<n;j++)
		{
			if(a[i].first==a[j].first && a[i].second<a[j].second && u==0)
				u++;
			else if(a[i].first==a[j].first && a[i].second>a[j].second && d==0)
				d++;
			else if(a[i].first<a[j].first && a[i].second==a[j].second && r==0)
				r++;
			else if(a[i].first>a[j].first &&a[i].second==a[j].second && l==0)
				l++;
		}
		if(l+r+u+d==4)
			cnt++;
	}
	cout<<cnt<<"\n";
return 0;
}
