#include<iostream>
using namespace std;
void print(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int position(int* a,int s,int e)
{	int i=s;
	int count=0;
	while(i<=e){
		if(a[i]<a[s])
			count++;
		i++;
				}
	int temp=a[count];
		a[s]=a[count];
		a[count]=temp;
	return count;
}
void quicksort(int* a,int s,int e)
{
	if(s<e)                       //5 2 1 4 6  7 
	{
		int m=position(a,s,e);
		quicksort(a,s,m-1);
		quicksort(a,m+1,e);
	}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
quicksort(a,0,n-1);
print(a,n);
}
