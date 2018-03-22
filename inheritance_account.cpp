#include<iostream>
using namespace std;
class Account
{
private:
char name[20];
long ano;      //ano=account number
long balance;   
public:
void details()
{
cout<<"Enter the name "<<endl;
cin>>name;
cout<<"Account number "<<endl;
cin>>ano;
cout<<"Opening balance "<<endl;
cin>>balance;
}
void display()
{
cout<<endl<<endl;
cout<<"Account number:"<<ano<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Opening balance:"<<balance<<endl;
} 
long get_balance()
{
return balance; 
}      
}a;
class Current: public Account //CA=current account
{
public:
void deposit()
{
int amount,r=0;
cout<<"Enter the amount to deposit in the account.....";
cin>>amount;
r =a.get_balance()+amount;
cout<<"The new balance in the amount after the Deposit is: "<<r;
}
void withdraw()
{
int money;
cout<<"How much money do you want to withdraw....."<<endl;
cin>>money;
if(money<a.get_balance())
{
int balance;
cout<<"Transaction in process:................"<<endl;
cout<<"Money withdraw is :"<<money<<endl;
balance=a.get_balance()-money;
cout<<"Balance amount in your acccount is: "<<balance<<endl;
}
else
cout<<"You cannot withdraw money from the account"<<endl;
}
void check_minbalance()
{
if(a.get_balance()<500)
{
cout<<"The balance of the account should not be less than 500.....the penalty imposed is"<<a.get_balance()-500;
}
else
cout<<"Your Account Balance is:"<<a.get_balance();
}
}c;
class Saving: public Account //SA= savings account
{
public:
void deposit()
{
int amount,r;
cout<<"\n Enter the amount to deposit in the account.....";
cin>>amount;
int get_balance(int);
cout<<r;
r =r+amount;
cout<<"\n The new balance in the amount after the Deposit is: "<<r;
}
void withdraw()
{
int money,r;
cout<<"\n How much money do you want to withdraw....."<<endl;
cin>>money;
int get_balance(int);
if(money<r)
{
cout<<"Transaction in process"<<endl;
cout<<"Money withdraw is :"<<money<<endl;
r=r-money;
cout<<"Balance amount in your acccount is: "<<r<<endl;
}
else
cout<<"You cannot withdraw money from the account"<<endl;
}
void interest(int time,int rate)
{
int r;
void display();
int t=time;
int ra=rate;
int inter;
inter=(r*ra*t)/100;
r=r+inter;
cout<<"After calculating interest, balance is"<<r<<endl;
}
}s;
int main()
{
char ch;
cout<<"Enter 'c' for Current account or 's' for Saving account";
cout<<endl;
cin>>ch;
int choice,t,r;
if(ch=='c'||ch=='C')
{
a.details();
a.display();
cout<<"\nDO YOU WANT TO:"<<endl;
cout<<"1. Deposit"<<endl<<"2. Withdraw"<<endl<<"3. Check Balance"<<endl<<"4. Do nothing"<<endl;
cout<<"Enter the choice from(1-4....)"<<endl;
cin>>choice;
switch(choice)
{
case 1: 
cout<<endl<<"You want to deposit"<<endl;
c.deposit();
break; 
case 2:
cout<<endl<<"You want to withdraw"<<endl;
c.withdraw();
break;
case 3:
cout<<endl<<"You want to check balance"<<endl;
c.check_minbalance();
break;
case 4:
cout<<"Kuch krna ne tha toh run he q krwaya"<<endl;
break;
default:
cout<<"\n none of the option matched"<<endl;
}
}
else if(ch=='s'||ch=='S')
{
a.details();
a.display();
cout<<"\n do you want to :"<<endl;
cout<<endl;
cout<<"     1. Deposit"<<endl<<"     2. Withdraw"<<endl<<"     3. Find Interest"<<endl<<"     4. Do nothing"<<endl;;
cout<<"Enter the choice from(1-4....)"<<endl;
switch(choice)
{
case 1: 
cout<<"\n You want to deposit"<<endl;
s.deposit();
break;
case 2:
cout<<"\n You want to withdraw"<<endl;
s.withdraw();
break;
case 3:
cout<<"\n You want to find the interest"<<endl;
cout<<" Enter the time and rate of interest"<<endl;
cin>>t>>r;
s.interest(t,r);
break;
case 4:
cout<<"\n ";
break;
default:
cout<<"\n none of the option matched"<<endl;
}

return 0;
}

