#include<iostream>
#include<math.h>
using namespace::std;
main(){
	int x[5][5],index1,index2;
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<5;k++)
		{
			cin>>x[i][k];
			if(x[i][k]==1)
			{
			index1=i+1;
			index2=k+1;	
			}
		}
	}
	
	cout<<abs(3-index1)+abs(index2-3);
}
