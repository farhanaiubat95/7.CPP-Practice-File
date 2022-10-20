#include<iostream>
using namespace std;
class  AddAmount
{

    float amount, amt =50 ;
public:
    AddAmount( )
    {
        amount = amt;
    }
    AddAmount( float  b )
    {

        amount = amt + b;

    }
    void display ()
    {
        cout << "Final amount in the Piggie Bank  = "<<amount <<"$"<<endl;
    }
};
int main()
{
     int n = 15 , i , y;
    AddAmount  amount[n] ;
    for( i=0 ; i< n ; i++)
    {
        cout << "Amount add  for  = " << i+1 << endl; ;
        cin>> y;
        amount[i] = AddAmount(y);
        y = 0;
    }
      for( i=0 ; i<n ; i++)
    {
        amount[i].display();
    }
}
