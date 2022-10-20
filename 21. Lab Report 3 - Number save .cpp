#include<iostream>
using namespace std ;

class  input
{
protected:
    string Phone_Num;
public:
    string name ;
   void  Input(string m,string p1)
    {
    name =m;
    Phone_Num=p1;

    }
    void show()
    {
        cout<<endl;
        cout << "//  Name : "<<name<<endl;
        cout<<"//  Phone Number : "<<Phone_Num<<endl;
    }
};
class official_N : public input
{
public :
    string official_phn;
void getin(string m,string p1)
{
    Input(m,p1);
}
 void display()
    {
         show();
    }
   void  input1()
    {
        cout<<"Enter the official number :  ";
        cin>>official_phn;
    }

    void  output()
    {
        show();
        cout<<"*Official Phone Number = "<<official_phn<<endl<<endl;
    }
};
int main()
{
    int i;
    string nameofficial ,n,p ;
    official_N  o1[2];

       for( i=0; i<2; i++)
    {
        cout <<"Enter your name "<<i+1<<" : ";
        cin>>n;
        cout<<"Enter your phone number "<<i+1<<" : ";
        cin>>p;
        o1[i].getin(n,p);
    }
    for( i=0; i<2; i++)
    {
        cout<<"The Person :  "<<i+1<<endl;
        o1[i].display();
    }
    cout<<"Enter the name whice you want to add official number  :  ";
    cin>>nameofficial;

    for( i=0; i<2; i++)
    {
        if( o1[i].name == nameofficial)
        {
            o1[i].input1() ;
            o1[i].output();
        }
    }
    return 0;
}
