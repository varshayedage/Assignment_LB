/*
1. Write a program which accept string from user and count number
of capital characters.
Input : "Marvellous Mult OS"
Output : 4
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
        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }

        int CountCapital()
        {
            int iCnt = 0;
            while(*str != '\0')
            {
                if((*str >='A') &&(*str <='Z'))
                {
                    iCnt++;
                }
                str++;
            }
            return iCnt;
        }
};
int main()
{
    String *sobj1 = new String(30);
    int iRet = 0;
    sobj1->Accept();
    sobj1->Display();
    iRet = sobj1->CountCapital();
    cout<<"Capital count is : "<<iRet<<endl;

//    delete sobj1;
    
    return 0;
}