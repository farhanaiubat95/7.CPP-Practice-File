//16. Shakil sir - Lab report -1 .cpp

/* Suppose you meet with your friend at a school reunion after a long time .
You don't have the number of your friend. Assume your friends' name is Shakib. you have given your number ,and
then your  friend also gives his number to you . After some time , he said i had another number . keep that one also.
That's my official number . I use it during my official hours . So then again ,on your phone , you are saving his number
under the same contact.
Now which OOP features resemble the situation . write a C++ program on it.

*/
#include<iostream>
using namespace std ;

class  input
{
protected:
    string Phone_Num;
public:
    string name ;

    input()
    {
        cout <<"Enter your name = ";
        cin>>name;
        cout<<"Enter your phone number  = ";
        cin>>Phone_Num;
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

    input1()
    {
        cout<<"Enter the official number :  ";
        cin>>official_phn;
    }
    void  output()
    {
        show();
        cout<<"* Official Phone Number = "<<official_phn<<endl<<endl;
    }
};
int main()
{
    int i;
    string nameofficial;
    official_N  o1[2];

    for( i=0; i<2; i++)
    {
        cout<<"The Person :  "<<i+1<<endl;
        o1[i].show();
    }
    cout<<"Enter the name whice you want to add official number  :  ";
    cin>>nameofficial;

    for( i=0; i<2; i++)
    {
        if( o1[i].name == nameofficial)
        {
            o1[i]. input1();
            o1[i].output();
        }
    }

    return 0;
}
