#include<iostream>
using namespace::std;
main(){
	int n=1,c=0;
	while(n!=0)
	{cin>>n;
	char *x=new char[n+1];
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x[i]==x[i+1]) c++;
	}
	cout<<c;
	
	}
	
}
