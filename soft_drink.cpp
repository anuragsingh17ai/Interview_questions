//n,k(bottles),l(ml),c(lime),d(sli),p(salt),nl(1),np(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n,k,l,c,d,p,nl,np;
	 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	 int td=(k*l)/nl;
	 int ts=p/np;
	 int tc=c*d;
	 cout<<min(tc,min(td,ts))/n;
     return 0;
}
