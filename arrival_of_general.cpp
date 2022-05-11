#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n],pmi=0,pma=0,min=INT_MAX,max=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(min>=a[i]){
			min=a[i];
			pmi=i;  }
		if(max<a[i]){
			max=a[i];
			pma=i;
				    }
					}
	if(pmi<pma)
		cout<<pma+(n-pmi-2)<<endl;
	else if( min==max)
		cout<<0<<endl;
	else
		cout<<pma+(n-pmi-1)<<endl;
	return 0;
}
