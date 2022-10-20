#include<iostream>
using namespace std;
class Square
{
    int n, sofn,Count ;
    float r;
    double sofr;
public :
    int input()
    {
        cin>>n;
        cin>>r;
    }
    double squar()
    {
        sofn=(n*n);
        sofr = r*r;
        return sofn;
        return sofr;
    }
    void output()
    {
        cout<< "Square of integer  "<<n<<" = "<<squar()<<endl;
        cout<< "Square of float  "<<r<<" = "<<sofr<<endl<<endl;
    }
};
int main()
{
    Square s1,s2 ;
    s1.input();
    s1.output();
    s2.input();
    s2.output();
    return 0;

}
