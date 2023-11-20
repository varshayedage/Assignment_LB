/*
3. Write a program which accept string from user and toggale the case 

Input : "Marvellous Multi OS"
Output : mARVELLOUS mULTI os
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


        void StrToggle()
        {
            char *ptr =str;
            while(*ptr != '\0')
            {
                if((*ptr >='A') &&(*ptr <='Z'))
                {
                    *ptr = (*ptr)+32;
                }
                else if((*ptr >='a') &&(*ptr <='z'))
                {
                    *ptr = (*ptr)-32;
                }
                ptr++;
            }
            cout<<str<<endl;
           
        }
};
int main()
{
    String *sobj1 = new String(30);
    sobj1->Accept();
    sobj1->StrToggle();
    
    return 0;
}