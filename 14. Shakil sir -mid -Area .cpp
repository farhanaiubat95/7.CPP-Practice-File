#include<iostream>
using namespace std;
class Area
{
public:
    float length , breadth ;

    void setDim( float l ,float b) //parameter passing
    {
        length = l;
        breadth = b;
    }
    friend float getArea( Area x);
};
float getArea( Area x)
{
   float i= ( 0.5 *(x.length*x.breadth) );
    cout<<"The area of the rectangle = "<<i<<endl;
}
int main()
{
    int m,n;
    cin>>m>>n;
    Area  a1; //1 class object
    a1.setDim(m,n);
    getArea(a1);
}
