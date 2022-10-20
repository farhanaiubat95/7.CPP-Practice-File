#include <iostream>
#include<string>
#include <stdio.h>
using namespace std;
int main()
{
    char  sentence[100];
    int  i, vowelcount=0, consocount=0 ;
    cout<<"Please write a sentence for count Vowel and Consonent number  :  ";
    gets(sentence);
   // cout<<"* You have written      : "<< sentence<<endl;
    for( i =0; sentence[i];i++)
    {
        if(sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U'
           ||sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
        {
            vowelcount++;
        }
        else if (sentence[i]>= 'A' && sentence[i]<='Z'||sentence[i]>= 'a' && sentence[i]<='z')
        {
            consocount++;
        }
    }
    cout<<"Number of Vowel is      : "<<vowelcount<<endl;
      cout<<"Number of Consonent is  : "<<consocount<<endl;
}
