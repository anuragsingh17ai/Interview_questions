#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,start_index=0,max=1;
cin>>n;
int *a=new int[n];

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        if(max<a[i]*a[j])
            max=a[i]*a[j];
    }

delete []a;

cout<<max;

return 0;
}


