/*
4. Write a program which accept string from user and display only digits
from that string.
Input : "marve89llous121"
Output : 89121
Input : "Demo"
Output : 
*/
#include<iostream>
using namespace std;
class String 
{
    private:
        char *str;
        int iSize;
    
    public:
        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }


        //Logic

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            cin.getline(str,iSize);

        }


        void StrDigit()
        {
            char Digit[iSize];
            int icnt =0;
            while(*str != '\0')
            {
                if((*str >='0') &&(*str <='9'))
                {
                    Digit[icnt] = *str;
                     icnt++;
                }
                str++;
            } 
            for(int i =0;i <icnt;i++)
            {
                cout<<Digit[i];
            }
            cout<<endl; 
        }
};
int main()
{
    String *sobj1 = new String(30);
    sobj1->Accept();
    sobj1->StrDigit();
    
    return 0;
}