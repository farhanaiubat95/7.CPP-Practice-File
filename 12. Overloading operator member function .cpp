#include<bits/stdc++.h>
using namespace std;
class test
{
    int value;
public:
    int i;
    test()
    {
        value =0;
    }
    test(int a)
    {
        value = a;
    }
    test operator - (test s)
    {
        test temp;
        temp.value= value - s.value;
        return temp;
    }
    friend  void display( test f);
};
void display( test f)
{

    cout<<"OB = "<< f.value <<endl;
}

int main()
{

    test t1(80), t2( 50), t3;
    t3=t1-t2;
    display(t1);
    display(t2);
    display(t3);

    return 0;
}
