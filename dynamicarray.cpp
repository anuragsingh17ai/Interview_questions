#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
int *p =new int ;
double *pd =new double;
char *pc=new char;
*p=3; *pd=4.555,*pc='c';
cout<<*p<<" "<<*pd<<" "<<*pc<<" "<<"\n";

int max=INT_MIN;
int n;
cout<<"Enter no of element \n";
cin>>n;

int *a = new int[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
if(max<a[i])
max=a[i];

cout<<max<<"\n";
}

