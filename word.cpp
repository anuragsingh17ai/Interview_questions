#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char s[100];cin>>s;
	int l=0,u=0;
	
	for(int i=0;s[i]!='\0';i++){
	if(islower(s[i])) l++;
	else u++;
	}
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(u<=l && isupper(s[i])){
			cout<<(char)(s[i]+32);
			continue;
								}
		if(l<u && islower(s[i])){
			cout<<(char)(s[i]-32);
			continue;
								}
		cout<<s[i];
	}
			
	return 0;
}
