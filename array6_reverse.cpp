/* program to revere the words of a string 
eg: Input :I love upes
    Output:I evol sepu


#include<iostream>
using namespace std;
#include<string.h>
int main()
{
cha str[80];
int len=0;
cout<<"Enter the string"<<endl;
cin.getline(str,80);


*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int k=0;
char str[80],w[80];
cin.getline(str,80);
int r=strlen(str);
cout<<r<<endl;
strcat(str," ");
int l=strlen(str);
cout<<l<<endl;
for(int i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
w[k]=str[i];
k=k+1;
}
else
{
while(k>0)
{
cout<<w[--k];
}
cout<<str[i];
}
}
return 0;
}




