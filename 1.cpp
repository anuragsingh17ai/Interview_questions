#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int n=3;
void search(int k)
{
if(k==n+1)
{
}
else{
subset.push_back(k);
search(k+1);
subset.pop_back();
cout<<k+1<<"\n";
search(k+1);
}}
int main()
{
int k=0;
search(0);
}
