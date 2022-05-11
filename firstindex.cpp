#include<iostream>
using namespace std;
int search(int n,int fi,int s,int p[])
{
if(p[fi]==s)
    return fi;
else if(fi==n)
    return -1;

search(n,fi+1,s,p);
}
int main()
{
int n,s;
cout<<"Enter no of element\n";
cin>>n;
int p[n];

for(int i=0;i<n;i++)
cin>>p[i];

cout<<"enter element to be searched";
cin>>s;
cout<<search(n,0,s,p);
}
