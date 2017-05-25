#include<iostream>
using namespace::std;
main()
{int c=0;
int x[3][3]={1,1,1,1,1,1,1,1,1};
int a[3][3];

for(int i=0;i<=2;i++)
{
	for(int j=0;j<=2;j++)
	{
		cin>>a[i][j];
		c=0;
		while(c<a[i][j])
		{c++;
		for(int k=0;k<3;k++)	if (x[i][k]==0) x[i][k]=1;else  x[i][k]=0;
		
		for(int l=0;l<3;l++)
	{	if (l==i)
		continue;
	    if(x[l][j]==0)x[l][j]=1;else x[l][j]=0;
	}
			
		}
			
	}

}
	
for(int i=0;i<=2;i++)
{
	for(int j=0;j<=2;j++)
	cout<<x[i][j];
	cout<<endl;
}	
}
