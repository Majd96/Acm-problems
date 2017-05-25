#include<iostream>

#include<string>
using namespace::std;

main()
{
int sum,c=0;
string n;
cin>>n;

while(n.size()!=1)
{
for(int i=0;i<n.size();i++) sum+=n[i]-'0';
n = to_string(sum);
c++;
}
cout<<n;
}
