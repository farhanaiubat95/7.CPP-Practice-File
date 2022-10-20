// First term - question - 4
#include<iostream>
using namespace std ;
int main()
{
    int id  ;
    float avrg, sum = 0.0;
    int mark[6],i;

    cout<<"Student_ID = ";
    cin>>id;
    cout<<"Enter 6 subject Marks : "<<endl;

    for( i=0 ; i< 6 ; i++ )
    {
        cin>>mark[i];
        sum = sum + mark[i] ;
    }
    avrg = sum/6;
    cout<<"Overall Marks = "<<avrg <<endl;
    if( avrg >= 90 && avrg <=100)
    {
        cout<<"Grade  = A"<<endl;
    }else if( avrg >= 85 && avrg <90)
    {
         cout<<"Grade  = B"<<endl;
    }else if( avrg >= 80 && avrg <85)
    {
         cout<<"Grade  = B-"<<endl;
     }else if( avrg >= 75 && avrg <80)
    {
         cout<<"Grade  = C+"<<endl;
     }else if( avrg >= 70 && avrg <75)
    {
         cout<<"Grade  = C-"<<endl;
     }else if( avrg <= 70 && avrg >=0)
    {
         cout<<"Grade  = F"<<endl;
    }
        else
        {
        cout <<"Error .... mark should be  0 to 100 .. so plz try again ...";
        }
}
