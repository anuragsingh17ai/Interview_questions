#include<bits/stdc++.h>
#define pb push_back
typedef long long int ll;
using namespace std;
int main()
{
	unordered_map<ll,string> ms;
	hash<string> h;
	string s;
	int a,n;
	cout<<"Enter no. of string:\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{	cin>>s;
		ms[h(s)mod10]=s;
	}
	cin>>a;
	
	//logic
	int c=n/a;
	auto it=ms.begin();
	while(c--)
	{	for(int i=0;i<a;i++)
			{	if(it!=ms.end()){
					cout<<it->second<<" ";
					it++;
				                }
			}
			cout<<endl;
	}
}

	
		

