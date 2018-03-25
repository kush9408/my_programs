#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
int c=0;
ifstream fin;
fin.open("marks.dat",ios::in);
while(fin)
{
fin.get(ch);
c++;
}
cout<<"total number of characters in file are :"<<c;
fin.close();
return 0;
}
//hello
