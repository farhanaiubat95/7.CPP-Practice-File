#include<iostream>
using namespace std;
class Calculate
{
    int age ;
public:
    Calculate() //Having no parameter - default constructor..
    {
        age =0;
    }
    Calculate ( int height) //Having  1  parameter - Paramiterized constructor.
    {
        age = height ;
    }
    Calculate operator  --()
    {
        Calculate temp;
        temp.age = age - 3;
        return temp;
    }

    friend  void display ( Calculate o); // using friend function...

};
void display(Calculate o)  // outside of class....
{
    cout << "After decrement =  " <<o.age << endl;
}
int main()
{
    int age;
    cin >> age;
    Calculate c1, c2(age);
    c1=  --c2;  // assign the incremented object to another object....
    display(c1);
}
