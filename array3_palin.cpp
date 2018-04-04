
                    //Program to check whether the string is Palindrome or not
#include<iostream>
using namespace std;
int main()
{
int flag,i,j;
char str[50];
cout<<"Enter the string"<<endl;
cin.getline(str,50);
int l=0;
for(int i=0;str[i]!='\0';i++)
l++;
for( i=0;i<l/2;i++)
{
for(j=l-1;j>l/2;j--)
{
if(str[i]!=str[j])
{
flag=0;
break;
}
}
}
if(flag!=0)
cout<<"The given string is a palindrome"<<endl;
else
cout<<"The string is not a palindrome"<<endl;
return 0;
}
