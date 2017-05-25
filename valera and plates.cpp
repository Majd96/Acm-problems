#include<iostream>
#include<math.h>
using namespace::std;
main()
{
int n,m,k;
cin>>n>>m>>k;
int *x=new int[n];
for(int i=0;i<n;i++)
{
	cin>>x[i];
	if(x[i]==1)m--;
	if(x[i]==2)
	{
		if(k!=0)k--;
		else
		m--;
	}
}	
if(m<0)
	
cout<<abs(m);
 else if(k<0)
 cout<<abs(k);
 else cout<<0;
	
	
}
