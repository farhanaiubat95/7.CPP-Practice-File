#include <iostream>
using namespace std;
int main()
{
    int array1[10],Size=7;

    cout<<"Enter 7 numbers :   ";
    for (int i=0; i < Size; i++)
    {
        cin >> array1[i] ;
    }
    cout << "Original array: ";
    for (int i=0; i <  Size; i++)
    {
        cout << array1[i] <<" ";
    }
    int i, sum ;
    cout<<endl<<"Enter  specified number  : ";
    cin>>sum;
    cout <<"\n Specified number  : "<<sum<<" :  "<<endl;
    cout <<"\n pairs of elements and their sum : ";
    for (int i=0; i< Size; i++)
        for (int j=i+1; j< Size; j++)
            if (array1[i]+array1[j] == sum)
            {
                cout << "\n" << array1[i] << " + " << array1[j];
            }
    cout <<endl;
    return 0;
}
