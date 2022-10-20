#include<iostream>
using namespace std;
class Marks
{
protected:
    string name;
    int roll;
    int marks;
public:
    void takee()
    {
        cout<<"Name = ";
        cin>>name;
        cout<<"Roll = ";
        cin>>roll;
    }
    void displayy()
    {
        cout<<"Name = "<<name<<endl;
    cout<<"Roll =  "<< roll<<endl;
    }
};
class physics:virtual public Marks{

public:
    int getinfo_p()
    {
        takee();
        cout<<"Physics mark :  ";
       cin>> marks;
    }
    void display_p()
    {
        displayy();
        cout<<"Marks in Physics = "<<marks<<endl;
    }
};
class chemistry:virtual public Marks{

public:
    int getinfo_c()
    {
        takee();
        cout<<"Chemistry mark :  ";
        cin>> marks;
    }
    void display_c()
    {
        displayy();
        cout<<"Marks in Chemistry = "<<marks<<endl;
    }
};
class Math:virtual public Marks{

public:
    int getinfo_m()
    {
        takee();
        cout<<"Math mark :  ";
        cin>> marks;
    }
    void display_m()
    {
        displayy();
        cout<<"Marks in Math = "<<marks<<endl;
    }
};
class Tot_avg:public physics,public chemistry,public Math
{
    float totl;
    float avg;
public:
    int getinfo()
    {

        getinfo_p();
        getinfo_c();
        getinfo_m();
    }
    float total()
    {
      totl =  getinfo_p()+getinfo_c()+getinfo_m();
        return totl;
    }
float avrg()
{
    avg= ( total()/3);
    return avg;
}
void display()
{

    display_p();
    display_c();
    display_m();
 cout<<"Total = "<<total()<<endl;
 cout<<"Average = "<<avrg()<<endl;
}
};
int main()
{
    Tot_avg  t1;
    t1.getinfo();
    t1.display();


}
