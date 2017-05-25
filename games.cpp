#include<iostream>
using namespace::std;
main(){
	int n,c=0;
	cin>>n;
	int x[n][2];
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<2;k++)
		   cin>>x[i][k];
		
	}
	for(int i=0;i<n;i++)
	{int k=0;
	       while(k<n)
	       {if(x[i][0]==x[k++][1])c++;
	       }
		
	}
	
	cout<<c;
}
