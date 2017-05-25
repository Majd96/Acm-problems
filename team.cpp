#include<iostream>
using namespace::std;
main(){
	int n,num=0,sum=0;
	cin>>n;
	int x[n][3];
	for(int i=0;i<n;i++)
	{
		for (int k=0;k<3;k++)
		{
			cin>>x[i][k];
			sum+=x[i][k];
			
			
			
		}
		if(sum>=2) 
			{num++;
			sum=0;
			}
	}
cout<<num;	
	
	
}

