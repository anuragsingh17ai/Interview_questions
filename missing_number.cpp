#include<bits/stdc++.h>
using namespace std;
long long int sum_array(long long int a[],long long int size)
{
	if(size==1)
		return a[0];
	
	else
	{
		return (a[0]+sum_array(a+1,size-1));
	}

}
	
int main()
{
long long int n,sum;
cin>>n;
sum=(n*(n+1))/2;

long long int a[n-1];
for(int i=0;i<n-1;i++)
	cin>>a[i];
	
cout<<sum-sum_array(a,n-1)<<"\n";
}
