#include<bits/stdc++.h>
using namespace std;
void algo()                         // n*n
{                                  //      00 01 02 
int n;                             //      10 11 12
cin>>n;                            //      20 21 22   //1 2 3 4 5 6 7 8 9
int a[n][n];
if(n==1)
	cout<<1<<"\n";
else if(n==2)           
	cout<<-1<<"\n";
else
{
long long l=1;
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		if((i+j)%2==0)            //00 1  02 2
			a[i][j]=l++;

for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		if((i+j)%2==1)
			a[i][j]=l++;

for(int i=0;i<n;i++)  {
	for(int j=0;j<n;j++)
		cout<<a[i][j]<<" ";
	cout<<"\n";       }
}
}
int main()
{
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
algo();
}
return 0;
}
