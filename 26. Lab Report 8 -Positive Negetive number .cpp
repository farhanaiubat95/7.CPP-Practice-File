#include <bits/stdc++.h>
using namespace std;
int main()
{
    level:
    float n,abs_n;
    cout<<"Input a number : ";
    cin>>n;
    if(n==0)
    {
        cout<<"Zero."<<endl;
    }else if(n>0)
    {
        cout<<"positive."<<endl<<endl;
    }else if(n<0)
    {
        cout<<"Negative."<<endl<<endl;
    }
    //for absuluting number
    if(n >= 0)
	{
		abs_n = n;
	}
	else
		abs_n= -n;

     if(abs_n<1)
     {
         cout<<"**** Absulute value of "<<n<<" is  = "<<abs_n<<endl;
         cout<<"small"<<endl<<endl;
     }else if(abs_n>1000000)
    {
        cout<<"****Absulute value of "<<n<<" is  = "<<abs_n<<endl;
        cout<<"large"<<endl<<endl;
    }
    goto level;
    return 0;
}
