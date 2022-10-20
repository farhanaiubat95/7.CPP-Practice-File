#include<iostream>
using namespace std;
class objarg
{
    int a,b;
public:
    int  i;
    void input_add_val(int c , int d)
    {
        a=c;
        b=d;
    }
void  alter_sign( objarg &x) // pass by reference ...
    {
        i =x.a + x.b;
    }
    void show ()
    {
        cout << "After addion =  "<<i<<endl;
    }
};
int main()
{
    objarg o1 , o2 ;
     o1.input_add_val(10,10);
     o2.input_add_val(5,5);
     o1.alter_sign(o2);
     o2.alter_sign(o1);
     o1.show();
     o2.show();
}

