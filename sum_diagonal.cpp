#include<iostream>
using namespace std;
int main()
{
int a[3][3],sum=0;
cout<<"Enter the array"<<endl;      // entering the valus in the array
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cin>>a[i][j];
}
}
cout<<endl<<"The array is"<<endl;        // printing the array
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<"  "<<a[i][j]<<"";
}
cout<<endl;
}

for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i==j)
sum=sum+a[i][j];
}
}
cout<<endl<<"Sum of Diagonal is"<<sum<<endl;
return 0;
}