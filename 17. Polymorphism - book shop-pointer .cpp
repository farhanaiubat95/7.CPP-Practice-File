#include<iostream>
using namespace std;
class Media
{
protected:
    string title ;
    int price;
    public:
    void getin(string t, int p)
    {
        title = t;
        price=p;
    }
  virtual void display()
    {
    cout<<"-----";
    }
};
class book:public Media
{
public:
    void getin_b(string t, int p)
    {
        getin(t, p);
    }
     void display()
    {
      cout<<"Book Title = "<<title<<endl;
      cout<<"Book Price = "<<price<<endl;
    }

};
class tape:public Media
{
public:
    void getin_t(string t, int p)
    {
        getin(t,  p);
    }
     void display()
    {
      cout<<"Tape Title = "<<title<<endl;
      cout<<"Tape Price = "<<price<<endl;
    }

};
int main()
{

  book book1;
  book1.getin_b("Abc",123);
     tape tape1;
     tape1.getin_t("Meri jan",345);
     Media  *List[2] = { &book1, &tape1};


     List[0]=&book1;
     List[1]=&tape1;
     List[0]->display();
     List[1]->display();

}
