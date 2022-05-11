#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
  if (n>=100)
    return (n/100+count(n%100));
  else if(n>=20 && n<100)
    return (n/20+count(n%20));
  else if(n>=10)
    return (n/10+count(n%10));
  else if(n>=5)
    return (n/5+count(n%5));
  else
    return n;
}
int main()
{
  int  n;
  cin>>n;
  cout<<count(n);
}
