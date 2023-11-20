/*
1. Write a program which accept string from user and accept one character
check whether that character is present in string or not.
Input : "Marvellous Multi OS"   e
Output : true
Input : "Marvellous Multi OS"   W
Output : false
*/
#include<iostream>
#include<stdbool.h>
using namespace std;
class String
{
    private :
    char *str;
    int iSize;
    char CValue;
    public:
    String(int X,char C)
    {
        iSize = X;
        CValue =C;
        str = new char[iSize];
    }
    ~String()
    {
        delete []str;
    }
    void accept()
    {
        cout<<"Enter the String"<<endl;
        cin.getline(str,iSize);
        cout<<"Enter the character"<<endl;
        cin>>CValue;
    }
    bool ChkChar()
    {
        bool bFlag = false;
        while(*str !=0)
        {
            if(*str == CValue)
            {
                bFlag = true;
                break;
            }
            str ++;
        }
        return bFlag;
    }
};
int  main()
{   char ch = '\0';
    bool bRet = false;
    String *sobj = new String(30,ch);
    sobj->accept();
    bRet = sobj->ChkChar();
    if(bRet == true)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    return 0;
}