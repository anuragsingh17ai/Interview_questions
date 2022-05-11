//author:- phinix99

#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
int k,c[500];  string a;
int main()
{
	
	cin>>k>>a;
	
	fo(i,0,a.size()-1)
		c[a[i]]++;
		
	fo(i,'a','z')
	{
			if(c[i]%k)
			{
				cout<<"-1";
				return 0;
			}
		}
		
	fo(i,1,k)
	{
		fo(j,'a','z')
		{
			fo(l,1,c[j]/k)
				cout<<(char)j;
		}
	}
}
	
	
