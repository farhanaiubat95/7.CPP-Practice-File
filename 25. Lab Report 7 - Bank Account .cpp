
#include<iostream>
#include<string>
#include<math.h>
#include <stdio.h>
using namespace std;
class account
{
  public:
  char cust_name[50],type[50];

  long acc_no,balance;
  void get()
  {
    cout<<"\nEnter customer name: ";
    cin>>cust_name;
    cout<<"Enter account number:";
    cin>>acc_no;
    cout<<"Enter type of account : ";
    cin>>type;
    cout<<"enter balance:";
    cin>>balance;
    cout<<endl;
  }
  void display()
  {
            cout<<"-> Customer Name: "<<cust_name<<endl;
            cout<<"-> Account Number: "<<acc_no<<endl;
            cout<<"-> Type: "<<type<<" account. "<<endl;
            cout<<"-> Balance: "<<balance<<" TK"<<endl;
            cout<<endl;
      }
  void deposit()
  {
    int amt;
    cout<<"\nenter the amount which you want to deposit:";
    cin>>amt;
    balance+=amt;
  }
};
class sav_acct:public account
{
  public:
  int intr;
  void comp_intrest()
  {
    int t1,r1=10;
    intr=balance*pow(1+r1/12,t1);
    cout<<intr;
    balance+=intr;
  }
  void withdraw()
  {
    int amt;
    cout<<"Enter the amount which do you want to withdraw:"<<endl;
    cin>>amt;
    if(balance>amt)
    balance-=amt;
    else
    cout<<"Amount can't be withdrawn due to insufficient balance"<<endl;
  }
};
class curr_acct:public account
{
  public:

  void min_bal()
  {
    if(balance<500)
      {
        cout<<"penality imposed: \nnew balance is:"<<balance-50<<endl;
      }
      else
      {
        cout<<"No penalty imposed"<<endl;
      }
  }
  void withdraw_C()
  {
    int amt;
    cout<<"Enter amount to be withdrawn:";
    cin>>amt;
    if(amt>balance)
    {
      cout<<"Amount can't be withdrawn due to insufficient balance"<<endl;
    }
    else
    {
      balance-=amt;
    }
  }
};
int main()
{
    int n1;
  sav_acct s1;
  curr_acct c1;
  lebel:
  cout<<"---------Welcome to our Bank-----------"
  <<endl<<"press 1 : for Saving Account ."
  <<endl<<"press 2 : for Current Account ."
  <<endl<<"Plz select a number : ";
  cin>>n1;
  if(n1==1)
  {
      cout<<endl<<"----Saving Account----"<<endl;
      s1.get();
  s1.display();
  s1.deposit();
  s1.comp_intrest();
  s1.display();
  s1.withdraw();
  s1.display();
  }
  else if(n1==2)
{
    cout<<endl<<"----Current Account----"<<endl;
     c1.get();
  c1.display();
  c1.deposit();
  c1.display();
  c1.withdraw_C();
  c1.display();
  c1.min_bal();
  }
  else
  {
      cout<<endl<<"Sorry! Your press number is not correct .Try again..."<<endl;
  }
goto lebel;
}
