// First term - question 2
#include<iostream>
#include<string>
using namespace std;
class  Employee
{
private: // This 2 should be kept hidden - that means Private...
    int salary ;
    float Year_incre;

public: // this 3 will use as public or private - your wish, bcz not declare anything in the question.
    string Name, position ;
    int ID ;

    void  getInfo( string n, int  id, string pos, int sal, float year) //said assign all the data - so i am using parameter.ok
    {
        Name = n;
        ID = id ;
        position = pos ;
        salary = sal;
        Year_incre = year;
    }
    void display()
    {
        cout<<"Name = "<<Name <<endl;
        cout<<"ID = "<<ID<<endl;
        cout<<"Position = "<< position<<endl;
        cout<<"Salary = "<< salary <<endl;
        cout<<"Year_increment = "<<Year_incre <<"%"<<endl<< endl<<endl;
    }

};
int main()
{
   Employee e1,e2, e3;
   e1.getInfo("Michael ", 514 , "Junior_SQA", 35000 , 7);
   e2.getInfo( "Samuel" , 515, "Senior_SQA", 75000 , 10);
   e3.getInfo("Samuel" , 516, "junior_Dev", 45000 , 9);
   e1.display();
   e2.display();
   e3.display();
}
