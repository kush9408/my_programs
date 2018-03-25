#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fileout;
fileout.open("marks.dat",ios::out);
int i=1,r,m;
char ch='y';
do
{
cout<<"\nstudent: "<<i;
cout<<"\n";
cout<<"roll number: ";
cin>>r;
cout<<"\nmarks: ";
cin>>m;
fileout<<r<<m;
cout<<"\n do you want to write more entries: ";
cin>>ch;
i++;
}
while(ch=='y');
fileout.close();
return 0;
}

