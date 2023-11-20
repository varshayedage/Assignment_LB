/*
3. Write a program which accept string from user and return difference
between frequency of small characters and frequency of capital characters
Input : "MarvellouS "
Output : 6(8-2)
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

        int Difference()
        {
            int iCnt1 = 0;
            int iCnt2 = 0;
            while(*str != '\0')
            {
                if((*str >='a') &&(*str <='z'))
                {
                    iCnt1++;
                }
                if((*str >='A') &&(*str <='Z'))
                {
                    iCnt2++;
                }
                str++;
            }
            
            return iCnt1-iCnt2;
        }
};
int main()
{
    String *sobj1 = new String(30);
    int iRet = 0;
    sobj1->Accept();
    sobj1->Display();
    iRet = sobj1->Difference();
    cout<<"Capital count is : "<<iRet<<endl;

//    delete sobj1;
    
    return 0;
}