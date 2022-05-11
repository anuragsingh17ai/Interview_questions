#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,string> m;
int n;
cout<<"Enter no of element you want to put into map :"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
int x;
string k;
cin>>x>>k;
m[x]=k;
}
for(auto &i:m)
cout<<i.first<<" "<<i.second<<endl;

}
