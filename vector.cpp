#include<bit/stdc++.h>
using namespace std;
int main()
{
	//dynamic...at will size extend.......
	
	vector<int> v; 
	
	for(int i=0;i<6;i++)
	{
		int a;
		cin>>a;
		v.push_back(a); //O(1)
	}
	
	for(int i=0;i<6;i++)
	{
		cout<<v[i]<<" ";
	}
	
	//update
	
	v[2]=0
	cout<<v[2]<<endl;
	cout<<"size of vector"<<v.size()<<endl;
	
	sort(v.begin(),v.end());
	for(int i=0;i<6;i++)
		cout<<v[i]<<" ";
	
	sort(v.rbegin(),v.rend());
	
	cout<<*max_element(v.begin(),v.end());   // to find max element
	
	cout<<count(v.begin(),v.end(),0);        // to find count of particular element
	
}
	

	
