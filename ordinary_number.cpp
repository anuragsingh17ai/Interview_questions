#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//algo to run every test case...
void algo()
{
	ll n,count=0; //n is the range in which we have to find ordinary no
	cin>>n;       //1000
	for(ll i=1;i<=9;i++)
	{
		ll temp=i;    //1 
		while(temp<=n)
		{
			temp=temp*10 +i;  //11 111 1111 22 222 2222
			count++;          //5
		}
	}
	cout<<count<<"\n";
}

//10 11 22 33 44 111 1111 2222 3333
//function to run all test cases....
int main()
{
	int t;
	cin>>t;
	while(t--) //6
	{
		algo();
	}
	return 0;
}
