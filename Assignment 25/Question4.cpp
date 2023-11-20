/*
4. Accept character from user and check whether it is spectial symbol
or not(!,@,#,$,%,^,&,*)
Input : %
Output : true
Input : d
Output : false
*/
#include<iostream>
#include<stdbool.h>
using namespace std;
class Symbol
{
    private :
    char ch;
    public : 
    Symbol(char C)
    {
        ch =C;
    }
    ~Symbol()
    {
      
    }
    bool ChkSpecial()
    {
        if(ch >='!' && ch <= '*')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    char cValue;
    bool bRet = false;
    cout<<"Enter the character"<<endl;
    cin>>cValue;
    Symbol sobj(cValue);
    bRet = sobj.ChkSpecial();
    if(bRet == true)
    {
        cout<<"It is special character"<<endl;
    }
    else
    {
        cout<<"It is not a special character"<<endl;
    }
    return 0;
}