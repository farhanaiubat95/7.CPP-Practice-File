#include<iostream>
using namespace std;
class directory
{

    string name, addr, head_of_the_family;
    string Tele_n,Mob_n;
public:
    string y,z;

    directory()
    {
        cout<<"Name = ";
        cin>>name;
        cout<<"Address = ";
        cin>>addr;
        cout<<"Telephone Number ( with STD code )  = ";
        cin>>Tele_n;
        cout<<"Mobile Number  = ";
        cin>>Mob_n;
        cout<<"Head of the family  = ";
        cin>>head_of_the_family;
    }
    void display()
    {
        cout<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Address = "<<addr<<endl;
        cout<<"Telephone Number = "<<Tele_n<<endl;
        cout<<"Mobile Number = "<<Mob_n<<endl;
        cout<<"Head of the family = "<<head_of_the_family<<endl;

    }
};
int main()
{
    directory d1;
    d1.display();
}
