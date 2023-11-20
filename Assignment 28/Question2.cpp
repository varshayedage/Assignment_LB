/*
2. Write a program which accept string from user and accept one character
and return frequency of that character.
Input : "Marvellous Multi OS"   M
Output : 2
Input : "Marvellous Multi OS"   W
Output : 0
*/
#include<iostream>

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
    int CountChar()
    {
        int iCnt =0;
        while(*str !=0)
        {
            if(*str == CValue)
            {
                iCnt++;
            }
            str ++;
        }
        return iCnt;
    }
};
int  main()
{   char ch = '\0';
    int iRet =0;
    String *sobj = new String(30,ch);
    sobj->accept();
    iRet = sobj->CountChar();
    cout<<"character frequency is "<<iRet<<endl;
   
    return 0;
}