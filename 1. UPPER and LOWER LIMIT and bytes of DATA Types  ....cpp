#include <iostream>
#include <climits>   // integer limits in header file
using namespace std;

int main()
{
    cout << "\n\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n"<< endl;

	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	 cout << "**** Size of int : " << sizeof(int) << " bytes **"<< endl<< endl;

	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	 cout << "**** Size of short int : " << sizeof(short int) << " bytes **" << endl<< endl;

	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
	cout << "**** Size of long int : " << sizeof(long int) << " bytes **" << endl<< endl;
	 cout << "**** Size of signed long int : "<< sizeof(signed long int) << " bytes **" << endl<< endl;

	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	 cout << "**** Size of unsigned long int : "<< sizeof(unsigned long int) << " bytes **" << endl<< endl;

	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	 cout << "**** Size of char : " << sizeof(char) << " byte **"<< endl<< endl;

	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;

    cout << "**** Size of float : " << sizeof(float) << " bytes **"<< endl<< endl;
    cout << "**** Size of double : " << sizeof(double)<< " bytes **" << endl<< endl;

  cout << "**** Size of wchar_t : " << sizeof(wchar_t)<< " bytes **" << endl<< endl;

   cout << endl;
   return 0;
}
