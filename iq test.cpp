#include<iostream>
using namespace::std;
main()
{char same;int c=0;
char x[4][4];
for(int i=0;i<=3;i++)
{
	for(int j=0;j<=3;j++)
	{
		cin>>x[i][j];
	}
}
for(int i=0;i<=2;i++)
{
	for(int j=0;j<=2;j++)
	{//c=0;
		
		
	
		if(x[i][j]!=x[i][j+1]) c++;
	
		if(x[i][j]!=x[i+1][j]) c++;
		
		if(x[i][j]!=x[i+1][j+1])c++;
		
		if(c==1||c==3||c==0)
		{
		cout<<"YES";exit(0);
		}
	   
		
		
		
	}

	
}	
cout<<"NO";
	
}
