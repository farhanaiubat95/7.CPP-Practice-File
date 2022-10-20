#include<iostream>>
using  namespace std;
class  TestClass
{
public:
    void Batch()
    {
        cout<<"* Test Class ---"<<endl;
    }
};
class ClassOne : public TestClass
{
public:
    void SectionA()
    {
        Batch();
        cout<<"** Class one - Section A.."<<endl;
    }
};
class ClassTwo: public TestClass
{
public:
    void  SectionC()
    {
        Batch();
        cout<<"** Class two - Section C.."<<endl;
    }

    void  SectionD()
    {
        Batch();
        cout<<"** Class two - Section D.."<<endl;
    }
};
class School
{
public:
    void Print()
    {
        cout<<"The information is : "<<endl;
    }
    ClassOne c;
    ClassTwo c1;
};
int main()
{
    School S1 ;
    ClassOne c;
    ClassTwo c1;
    S1.Print();
    c.SectionA();
    c1.SectionC();
    c1.SectionD();
}
