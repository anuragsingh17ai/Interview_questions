#include<bits/stdc++.h>
using namespace std;
void algo()
{
map<int,bool> Map;
int n;
string s;
cin>>n>>s;
bool flag=true;
Map[s[0]]=true;
for(int i=1;i<n;i++)
{
    if(s[i]==s[i-1]) continue;
    if(Map[s[i]]) flag=false;
    Map[s[i]]=true; 
}

if(flag) puts("YES");
else puts("NO");
}


int main()
{
int t;
cin>>t;
while(t--)
{
algo();
}
}
