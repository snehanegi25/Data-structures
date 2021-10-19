#include<iostream>
using namespace std;
int main()
{
int a[3][3],i,j;
cout<<"Enter number";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
cout<<"\n";
cout<<"The given matrix is\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
cout<<"\n\n";
cout<<"Matrix reverse\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<10-a[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}
