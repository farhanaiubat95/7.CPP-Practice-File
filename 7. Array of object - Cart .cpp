
#include<iostream>
using namespace std;
class Cart
{
    string  cus_n, prod_n[50];
    float prod_Q[50], price_p_u[50] ;
public:
    int Size,i ;
    void getinfo()
    {
        cout<<"Customer_Name = ";
        cin>>cus_n;
        cout<<"How many product You Want to Buy  =  ";
        cin>>Size;
        cout<<"Enter product name = ";
        for( i=0 ; i<Size ; i++)
        {
            cin>>prod_n[i];
        }
        cout<<"Enter product Quantities = ";
        for( i=0 ; i<Size ; i++)
        {
            cin>>prod_Q[i];
        }
        cout<<"Enter Price_Per Unit = ";
        for( i=0 ; i<Size ; i++)
        {
            cin>>price_p_u[i];
        }
    }

    float totalamount()
    {
        int sum = 0;
        for( i=0 ; i<Size ; i++)
        {
            sum += prod_Q[i] * price_p_u[i];
        }

        return sum;

    }
    void display()
    {
        cout<<endl<<"Customer_Name :  "<<cus_n<<endl;
        cout<<"Product Names :   ";
        for( i=0 ; i<Size ; i++)
        {
            cout<<prod_n[i]<< "    ,\t";
        }
        cout<<endl<<"Product Quantities:   ";
        for( i=0 ; i<Size ; i++)
        {
            cout<<prod_Q[i]<<"\t";
        }
        cout<<endl<<"Price_Per Unit :    ";
        for( i=0 ; i<Size ; i++)
        {
             cout<<price_p_u[i]<<"\t";
        }

        cout<<endl<<" Unit Total Price :    ";
        for( i=0 ; i<Size ; i++)
        {
            cout<<prod_Q[i] * price_p_u[i]<<"\t";

        }

        cout<<endl<<"Particular Product Price :   "<<totalamount() <<endl<<endl;

    }

};
int main ()
{
    Cart  c1, c2;
    c1.getinfo();
    //  c2.getinfo();
    c1.display();
    //c2.display();
    return 0;
}
