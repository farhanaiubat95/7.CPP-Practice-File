#include<iostream>
using namespace std;
class  Complex
{
    public:
    double real, img;
    Complex(){}
    Complex( double r , double i)
    {
        real = r;
        img= i;
    }
    Complex operator +( Complex  o)
    {
        Complex temp ;
        temp.real = real + o.real;
        temp.img= img + o.img;
        return temp;
    }
    Complex operator - (Complex o)
    {
          Complex temp ;
        temp.real = real - o.real;
        temp.img= img -o.img;  // - /+ sign problem;;;;;
        return temp;
    }
    Complex operator * (Complex  o)
    {
        Complex temp;
        temp.real = real *o.real + img*o.img*(-1);
        temp.img=  img*o.real + real *o.img;
        return temp;
    }
    friend void display(Complex x);
};
istream& operator>> (istream& in, Complex& x)
{
	cout<<"Please, enter a real number: ";
	in>>x.real;
	cout<<"Please, enter an imaginary number: ";
	in>>x.img;
	return in;
}
ostream& operator<< (ostream& Cout, Complex& x)
{
	Cout<<x.real;
	if(x.img>0)
	{
		Cout<<"+"<<x.img<<"i";
	}
	else if(x.img<0)
	{
		Cout<<x.img<<"i";
	}
	return Cout;
}
void display(Complex x)
{
    cout<<x.real <<"+"<<x.img<<"i ."<<endl; // sign problem...
}
int main()
{
	Complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	cout<<"You entered two complex numbers:\n";
	cout<<"a= "<<c1<<"\nb= "<<c2<<endl;
    cout<<"Complex Addition                :  ";
    c3=c1+c2;
    display(c3);
    cout<<"Complex Difference              :  ";
    c3=c1-c2;
    display(c3);
    cout<<"product of two Complex numbers  :  ";
    c3= c1*c2;
    display(c3);
}
