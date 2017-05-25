#include<iostream>
using namespace::std;
main(){
int n,sum1=0,sum2=0;
char *s=new char[n+1];
cin>>n;
cin>>s;
while(*s!='\0')
{
if(*s=='A')
sum1++;
else if (*s=='D')
sum2++;	
s++;
}	
if(sum1>sum2)cout<<"Anton";
else if(sum1<sum2)cout<<"dankin";
else cout<<"friendship";	
	
}
