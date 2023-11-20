/*
3. Write a program which accept string from user and accept one character
and return index of first occuerance of that character.
Input : "Marvellous Multi OS"   M
Output : 0
Input : "Marvellous Multi OS"   W
Output : -1
Input : "Marvellous Multi OS"   e
Output : 4
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
    int FirstChar()
    {
        int iCnt =0;
        int temp = -1;
        while(*str !=0)
        {
            if(*str == CValue)
            {
                temp = iCnt;
                break;
            }
            str ++;
            iCnt++;
        }
        return temp;
    }
};
int  main()
{   char ch = '\0';
    int iRet =0;
    String *sobj = new String(30,ch);
    sobj->accept();
    iRet = sobj->FirstChar();
    cout<<"first occurence of character at index "<<iRet<<endl;
   
    return 0;
}