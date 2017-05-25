#include<iostream>
using namespace::std;
main()
{
	int n,x=0;
	cin>>n;
	char a[3];
	for(int i=0;i<n;i++)
	{   
		cin>>a;
		
		if((*a=='x'&&*(a+1)=='+'&&*(a+2)=='+')||(*a=='+'&&*(a+1)=='+'&&*(a+2)=='x'))x++;
		if((*a=='x'&&*(a+1)=='-'&&*(a+2)=='-')||(*a=='-'&&*(a+1)=='-'&&*(a+2)=='x'))x--;
	}
		
	
	cout<<x;
}
