#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float n,av=0;
	cin>>n;
	for(float i=0;i<n;i++)
	{
		float bta_bhai;
		cin>>bta_bhai;
		av+=bta_bhai;
	}
	printf("%.12f\n",av/n);
}
