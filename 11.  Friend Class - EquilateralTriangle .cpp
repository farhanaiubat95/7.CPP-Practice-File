#include<iostream>
using namespace std;
class EquilateralTriangle
{
float a,circumference,area;

public:
void setA (float length)
{
    a = length;
circumference = a *3;
area = (1.73*a*a)/4;
}
friend class Homework;
};
class Homework
{
public:
void PrintResult(EquilateralTriangle et){
cout<<"Circumference is: "<<et.circumference<<endl;
cout<<"Area is: "<<et.area<<endl;
}
};
int main()
{
    EquilateralTriangle et1;
    et1.setA(7);

   Homework h;
   h.PrintResult(et1);
   return 0 ;
}
