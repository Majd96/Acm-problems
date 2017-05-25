
/*
Vanya and his friends are walking along the fence of height h 
and they do not want the guard to notice them.
 In order to achieve this the height of each of the friends should not exceed h.
  If the height of some person is greater than h he can bend down 
  and then he surely won't be noticed by the guard. 
  The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1,
 while the width of the bent person is equal to 2. 
 Friends want to talk to each other while walking, 
 so they would like to walk in a single row.
  What is the minimum width of the road,
   such that friends can walk in a row and remain unattended by the guard?
*/


#include<iostream>
using namespace::std;
main(){
	
	
	int n,sum=0;
	double h;
	cout<<"enter the value of n and h:\n";
	cin>>n>>h;
	double *a=new double[n];
	cout<<"enter the values for person's heigth";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>h)
		a[i]=2;
		else
		a[i]=1;
		sum+=a[i];
				
	}
	cout<<sum;
	
	
	
	
	
	
}
