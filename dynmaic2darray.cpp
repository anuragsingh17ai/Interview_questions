#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"Enter no of rows and columns\n";
cin>>m>>n;

int **p=new int*[m];
for(int i=0;i<m;i++)
{ 
p[i]=new int[n];
for(int j=0;j<n;j++)
cin>>p[i][j];
}

for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cout<<p[i][j]<<" ";

return 0;
}


