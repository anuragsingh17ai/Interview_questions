#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,min=INT_MAX,p;
	cin>>n;
	bool flag=true;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==min)
		{	flag=false;
		}
		else if(a[i]<min)
		{	min=a[i];
			p=i;
			flag=true;
		}
	}
	flag==true?cout<<p+1<<"\n":cout<<"Still Rozdil\n";
	return 0;
}
	
