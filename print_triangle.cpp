#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"\n enter the number of rows";
cin>>n;
for(int i=0;i<n;i++)
{
int j=i;
while(j<n)
{
cout<<" ";
j++;
}
int p=i;
while(p>=0)
{
cout<<"*";
p--;
}

cout<<"\n";
}
return 0;
} 
