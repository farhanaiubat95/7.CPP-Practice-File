#include<iostream>
using namespace std;
class Triangle
{
private:
    double base ;
    double height;
    double Area() // this 3 are private member.
    {
        return ((1/2.0)*base*height);
    }
public:
    Triangle()  //Having no parameter - default constructor..
    {
        base = 0;
        height= 0;
    }
    Triangle(double a, double b) //Having 2 parameter - Paramiterized constructor.
    {
        base = a;
        height = b;
    }
    Triangle( double c)
    {
        base= c;
        height =20;
    }
    void display();
};

void Triangle::display()
{
    cout<<"Area of  Triangle of "<<base<<" and "<<height<<" are = "<<Area()<<endl;
}
int main()
{
    Triangle t1, t2(20),t3(10,15);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
