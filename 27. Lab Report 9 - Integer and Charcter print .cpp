#include<iostream>
using namespace std;
class Print
{
public:
    void serial(int n, char c[10])
    {
        cout <<"** Integer value and Character value : "<<n<<" and "<<c<<endl;
    }
       void serial(char c[10], int n)
    {
          cout <<"## Integer value and Character value : "<<n<<" and "<<c<<endl;
    }
    };
    int main()
    {
        Print p1;
        p1.serial(10,"ABC");
        p1.serial("Life",0);
    }

