#include<iostream>
using namespace std;
int main()
{
    float jsc , ssc ,sum,  sum1, sum2;
    cout<<"Plz input JSC marks in English : ";
    cin>>jsc;
    cout<<"Plz input SSC marks in English : ";
    cin>>ssc;

    sum2 = (jsc * 0.25);
    sum1=(ssc*0.75);
    sum=(sum2+sum1);
cout<<sum2 <<"+"<<sum1<<" = "<<sum<<endl;
    if(sum >=0 && sum<=100)
    {
        if(sum>=80 && sum<=100)
        {
            cout<<"Your HSC grade in English is -  Grade A."<<endl<<endl;
        }else if(sum>=70 && sum<=79)
        {
             cout<<"Your HSC grade in English is -  Grade B.."<<endl<<endl;
        }else if(sum>=60 && sum<=69)
        {
             cout<<"Your HSC grade in English is -  Grade C..."<<endl<<endl;
        }else if(sum>=50 && sum<=59)
        {
             cout<<"Your HSC grade in English is -  Grade D..."<<endl<<endl;
        }else if( sum<50)
        {
             cout<<"Your HSC grade in English is -  Fail...."<<endl<<endl;
        }
    }
    else
    {
        cout<<"Sorry ! Your input marks are not correct.Plz rewrite..."<<endl<<endl;
    }
    return 0;
}

