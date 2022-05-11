#include<bits/stdc++.h>
#define for(i,a,b) for(int i=a;i<b;i++)

using namespace std;
int main()
{
	string str,s="WUB",a1=" ";
	cin>>str;
	size_t a=str.find(s);
	while(a!=string::npos)
	{
		str.replace(a,3,a1);
		a=str.find(s);
	}
	cout<<str;
	return 0;
}
