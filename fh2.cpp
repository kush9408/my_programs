
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
ofstream fileout;
int r,m,i,n;
char name[20];
cout<<"\n enter the students information";
cout<<"\n enter the number of students";
cin>>n;
fileout.open("student.txt",ios::out);
for(i=0;i<n;i++)
{
cout<<"\nstudent: "<<i+1;
cout<<"\nname: ";
cin>>name;
cout<<"\nroll number: ";
cin>>r;
cout<<"\nmarks: ";
cin>>m;
fileout<<name<<endl<<r<<endl<<m<<endl;
}
fileout.close();
ifstream filin;
filin.open("student.txt",ios::in);
cout<<"\n student information is"<<endl;
for (int j=0;j<i;j++)
{

filin>>name;
filin>>r>>m;
cout<<"\n student"<<j+1<<endl;
cout<<" name is :"<<name<<endl;
cout<<"\nroll number :"<<r<<endl;
cout<<"\nmarks :"<<m<<endl;
}
filin.close();
return 0;
}

//practice program
//create a single file and display its content
