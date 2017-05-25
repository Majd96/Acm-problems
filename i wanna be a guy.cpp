#include<iostream>
#include<stack>
using namespace::std;
main()
{
	int n;stack<int>s;
	cin>>n;
	int *b=new int [n];
	int *q=new int[n];
	int *f=new int[n];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++)cin>>q[i];
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<n;j++)
	if(i==b[j]||i==q[j])s.push(1);
}
	
		
if(n==s.size())cout<<"I become the guy.";
else cout<<"Oh, my keyboard!"; 
	
	
	
}
