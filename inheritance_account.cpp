#include<iostream>
using namespace std;
class Account
{
private:
char name[20];
int ano;      //ano=account number
int balance;   
public:
void details()
{
cout<<"\n enter the name";
cin>>name;
cout<<"\n account number"<<ano;
cin>>ano;
cout<<"\n opening balance";
cin>>balance;
}
void display()
{
cout<<endl<<endl<<endl;
cout<<"account number"<<ano<<endl<<endl;
cout<<"opening balance"<<balance<<endl<<endl;
cout<<"name is"<<name<<endl<<endl;
} 
int get_balance(int r)
{
r=balance; 
}      
};
class Current: public Account //CA=current account
{
public:
void deposit()
{
int amount,r;
cout<<"\n Enter the amount to deposit in the account.....";
cin>>amount;
int get_balance(int);
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
void check_minbalance()
{
int r;
int get_balance(int);
if(r<500)
{
cout<<"The balance of the account should not be less than 500.....the penalty imposed is"<<r-500;
cout<<"After penalty main balance is"<<r-500;
}
}
};
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
};
int main()
{
Account a;
Current c;
Saving s;
char ch;
cout<<"\n Enter 'c' for Current account or 's' for Saving account";
cout<<endl;
cin>>ch;
int choice,t,r;
if(ch=='c'||ch=='C')
{
a.details();
a.display();
cout<<"\n do you want to :"<<endl;
cout<<endl;
cout<<"     1. Deposit"<<endl<<"     2. Withdraw"<<endl<<"     3. Check Balance"<<endl<<"     4. Do nothing"<<endl;;
cout<<"Enter the choice from(1-4....)"<<endl;
cin>>choice;
switch(choice)
{
case 1: 
cout<<"\n You want to deposit"<<endl;
c.deposit();
break; 
case 2:
cout<<"\n You want to withdraw"<<endl;
c.withdraw();
break;
case 3:
cout<<"\n You want to check balance"<<endl;
c.check_minbalance();
break;
case 4:
cout<<"\n ";
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
}
return 0;
}


 

