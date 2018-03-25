#include<iostream>
#include<fstream>
using namespace std;
class student
{
private:
int rno,age;
char name [20];
public:
void input();
void showdata();
}s;

void student::input()
{
cout<<"enter the following details:"<<endl;
cout<<"roll number"<<endl<<"age"<<endl<<"name"<<endl;
cout<<endl;
cin>>rno>>age>>name;
}

void student:: showdata()
{
cout<<"\nThe student details are"<<endl;
cout<<endl;
cout<<rno <<endl<<age<<endl<<name <<endl;
cout<<endl;
}
int main ()
{
int ch=-1; int c=0;
ofstream fout;
fout.open("read.txt",ios::binary);

do
{  c++;
cout<<"\n enter the record of the student"<<endl;
s.input();
fout.write((char*)&s,sizeof(s));
cout<<"\n do you want to add more records, enter -1 to continue"<<endl;
cin>>ch;
}while(ch==-1);

fout.close();
ifstream fin;
fin.open("read.txt",ios::binary);
for (int i=0;i<c;i++)
{ 
fin.read((char*)&s,sizeof(s));
s.showdata();
}
fin.close();
return 0;
}




