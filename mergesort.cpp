#include<iostream>
using namespace std;
void print(int* a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void merge(int* a,int s,int m,int e)
{
	int ll=m-s+1;
	int rl=e-m;
	int k=0,i,j;
	int rarray[rl],larray[ll];
	
	for(i=0;i<ll;i++)
		larray[i]=a[s+i];
		
	for(j=0;j<rl;j++)
		rarray[j]=a[m+j+1];
	
	i=0;j=0;k=s;
	while(i<ll && j<rl)
	{
		if(larray[i]<rarray[j]){
			a[k]=larray[i];
			k++;i++;		   }
							 
		else{
			a[k]=rarray[j];
			j++;k++;
		    }
		    
	}
	while(i<ll)			{
		a[k]=larray[i];
		k++;i++;
						}
	
	while(j<rl)			{
		a[k]=rarray[j];
		k++;j++;
					}
}
							
	
void mergesort(int *a,int s,int e)
{
	if(s<e)
	{
		int m=(s+e)/2;
		mergesort(a,s,m);
		mergesort(a,m+1,e);
		merge(a,s,m,e);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	mergesort(a,0,n-1);

	print(a,n);
	
	return 0;
}
