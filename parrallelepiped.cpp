//l*b b*h h*l
//This is phinix99........
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<(int)(4*(sqrt((a*c)/b)+sqrt((b*a)/c)+sqrt((c*b)/a)))<<"\n";
	return 0;
}
