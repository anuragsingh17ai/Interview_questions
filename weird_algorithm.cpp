#include<bits/stdc++.h>
using namespace std;
int algo(long long int n)
{
	if(n<=1)
	{
		return 0;
	}
	else if(n%2==0)
	{ 		n/=2;
		cout<<n<<" ";
		algo(n);
	}
	else
	{	n=(n*3)+1;
		cout<<n<<" ";
		algo(n);
	}
return 0;
}
		
int main()
{	
	long long int n;
	cin>>n;
	cout<<n<<" ";
	algo(n);
}
