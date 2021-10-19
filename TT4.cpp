#include<iostream>
using namespace std;
int main()
{
int i,j,k,rows;
cin>>rows;
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=i;k<=rows;k++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}

