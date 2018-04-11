     //program to calculate the grade of 4 students from 3 tests scores


#include<iostream>
using namespace std;
int main()
{
int marks[4][3],sum=0,avg;
char grade[4];
cout<<"Enter the marks"<<endl;
for(int i=0;i<4;i++)
{
sum=0;
cout<<"Student"<<i+1<<" marks in 3 subjects";
for(int j=0;j<3;j++)
{
cin>>marks[i][j];
sum=sum+marks[i][j];
}
avg=sum/3;
if(avg<50)
grade[i]='D';
else if(avg<60)
grade[i]='C';
else if(avg<70)
grade[i]='B';
else grade[i]='A';
}
cout<<"The result is"<<endl<<endl;
for(int i=0;i<4;i++)
{
cout<<"Student   "<<i+1<<" Total marks"<<marks[i][0]+marks[i][1]+marks[i][2]<<"   "<<grade[i]<<endl;
}
return 0;
}

