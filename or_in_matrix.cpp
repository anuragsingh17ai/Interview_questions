#include<iostream>
typedef long long ll;
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[r][c];
	int m[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			m[i][j]=1;
			
	for(int i=0;i<r;i++) 
		for(int j=0;j<c;j++)
		{ 
			cin>>a[i][j];
			if(!a[i][j])    
			{
				for(int k=0;k<c;k++)
					m[i][k]=0;
				for(int k=0;k<r;k++)
					m[k][j]=0;
			}
		}
	
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			if(a[i][j])
			{
				int s=0;
				for(int k=0;k<r;k++)
					s+=m[k][j];
				for(int k=0;k<c;k++)
					s+=m[i][k];
				if(!s)
				{
					cout<<"NO\n";
					return 0;
				}
			}
	cout<<"YES\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout<<m[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}

