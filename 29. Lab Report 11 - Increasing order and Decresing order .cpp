#include<iostream>
using namespace std;
int main()
{
    lebel:
    int a,b,c;
    cout<<"Input first number : ";
        cin>>a;
        cout<<"Input second number : ";
        cin>>b;
        cout<<"Input third number : ";
        cin>>c;
    if (a<b && b<c)
    {
         cout<<"Increasing order"<<endl<<endl;
 }else if ( a>b && b>c)
  {
         cout<<"Decreasing order"<<endl<<endl;
 }else
 {
     cout<<"Neither increasing nor decreasing order"<<endl<<endl;
 }
 goto lebel;
}
