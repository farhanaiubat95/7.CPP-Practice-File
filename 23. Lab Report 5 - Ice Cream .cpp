#include<iostream>
using namespace std ;
class near_home
{
public:
    void ABC_Ice_Cream()
    {
        cout<<"This shop is near by my home."<<endl<<
        "vanilla-flavored ice cream."<<endl<<endl;
    }
};
class town_nearby : public near_home
{
public:
    void ABC_Ice_Cream()
    {
        cout<<"This shop is located in the neighboring town."<<endl<<
        "The Vanilla flavor ice cream, which had a twist of Chocolate flavor."<<endl<<endl;
    }
};
int main()
{
    town_nearby t1;
    t1.ABC_Ice_Cream();
    t1.near_home::ABC_Ice_Cream();
}
