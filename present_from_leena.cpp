#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	//for first half my friend.......
	for(int i=0;i<=n;i++)
	{
		int t=-1;
		for(int j=0;j<=n*2+1;j++)
		{
			if(j>=n-i && j<=n+i)
			{
				if(j<=n)
					cout<<++t;
				else
					cout<< --t;
				if(j!=n+i)
					cout<<" ";
					
			}
			else if(j<n-i)
			cout<<"  ";
		}
		cout<<endl;
	}
	
	//for 2nd half my friend....
	for(int i=0;i<n;i++)
	{
		int t=-1;
		for(int j=0;j<=n*2+1;j++)
		{
			if(j>i && j<n*2-i)
			{
				if(j<=n)
				cout<<++t;
				else
					cout<< --t;
				if(j<n*2-i-1)
					cout<<" ";
				
			}
			else if(j<=i)
				cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

