/*
4. Write a program which accept string from user and check whether it
contains vowels in it or not
Input : "marvellous"
Outout : TRUE
Input : "Demo"
Outout : TRUE
Input : "xyx"
Outout : false
*/
#include<iostream>
#include<stdbool.h>
using namespace std;
class String
{
    private : 
    char *str;
    int iSize;
    public :
    String(int x)
    {
        iSize = x;
        str =  new char[iSize];

    }
    ~String()
    {
        delete []str;
    }
    void accept()
    {
        cout<<"Enter the String"<<endl;
        cin.getline(str,iSize);
    }
    void display()
    {
        cout<<str<<endl;
    }
    bool ChkVowel()
    {
        bool bFlag = false;
        while(*str != '\0')
        {
            if((*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u')||
            (*str =='A')||(*str =='E')||(*str =='I')||(*str =='O')||(*str =='U'))
            {
                bFlag = true;
            }
            str++;
        }
        return bFlag;
    }

};
int main()
{
    bool bRet = false;
    String  *sobj = new String(30);
    sobj->accept();
    sobj->display();
    bRet =sobj->ChkVowel();
    if(bRet == true)
    {
        cout<<"String contains vowel"<<endl;
    }
    else
    {
        cout<<"There is no vowel"<<endl;
    }

    return 0;
}