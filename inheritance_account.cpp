#include<iostream>
using namespace std;
class Account
{
private:
char name[20];
long ano;      //ano=account number
unsigned long balance;   
public:
void details()
{
cout<<"Enter the name "<<endl;
cin>>name;
cout<<"Account number "<<endl;
cin>>ano;
cout<<"Opening balance "<<endl;
cin>>balance;
cout<<endl;
}
void display();

long get_balance()
{
return balance; 
}      
}*p; //pointer for base class

void Account::display()
{
cout<<"\t"<<"*****ACCOUNT*****"<<endl;
cout<<endl<<endl;
cout<<"Account number:"<<ano<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Opening balance:"<<balance<<endl;
} 
class Current: public Account //CA=current account
{
long r;
public:
void deposit();
void withdraw();
void check_minbalance();
}c;

void Current::deposit()
{
display(); 

int amount;
cout<<"Enter the amount to deposit in the account.....";
cin>>amount;
r =p->get_balance();
cout<<endl;
cout<<r;
cout<<endl;
r=r+amount;
cout<<"The new balance in the amount after the Deposit is: "<<r;
}
void Current:: withdraw()
{
int money;
cout<<"How much money do you want to withdraw....."<<endl;
cin>>money;
if(money<p->get_balance())
{
int balance;
cout<<"Transaction in process:................"<<endl;
cout<<"Money withdraw is :"<<money<<endl;
balance=p->get_balance()-money;
cout<<"Balance amount in your acccount is: "<<balance<<endl;
}
else
cout<<"You cannot withdraw money from the account"<<endl;
}
void Current:: check_minbalance()
{
if(p->get_balance()<500)
{
cout<<"The balance of the account should not be less than 500.....the penalty imposed is"<<p->get_balance()-500;
}
else
cout<<"Your Account Balance is:"<<p->get_balance();
}
class Saving: public Account //SA= savings account
{
public:
void deposit()
{
int amount,r;
cout<<"\n Enter the amount to deposit in the account.....";
cin>>amount;
r =p->get_balance()+amount;
cout<<"\n The new balance in the amount after the Deposit is: "<<r;
}
void withdraw()
{
int money,r;
cout<<"\n How much money do you want to withdraw....."<<endl;
cin>>money;
r=p->get_balance();
if(money<r)
{
cout<<"Transaction in process"<<endl;
cout<<"Money withdraw is :"<<money<<endl;
r=r-money;
cout<<"Balance amount in your acccount is: "<<r<<endl;
}
else{
cout<<"You cannot withdraw money from the account"<<endl;}
}
void interest(int time,int rate)
{
int r;
r=p->get_balance();
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
{p=&c;
p->details();
p->display();
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
{ p=&s;
p->details();
p->display();
cout<<"\n do you want to :"<<endl;
cout<<endl;
cout<<"     1. Deposit"<<endl<<"     2. Withdraw"<<endl<<"     3. Find Interest"<<endl<<"     4. Do nothing"<<endl;;
cout<<"Enter the choice from(1-4....)"<<endl;
cin>>choice;
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
}
return 0;
}

