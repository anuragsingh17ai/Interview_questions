#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int i,cnt=0;
cin>>i;
string s;
cin>>s;i--;
while(i>0){
if(s[i]==s[i-1])
	cnt++;
i--;
}
cout<<cnt;
return 0;
}
