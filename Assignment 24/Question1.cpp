/*
1. Accept character from user and check whether it is alphabet or not
   (A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<iostream>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
using namespace std;
class String 
{
    private:
        char ch;
        
    
    public:
        String(char C)
        {
           ch = C;
        }
        ~String()
        {
            
        }

        BOOL ChkAlpha()
        {
            if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }

};
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;
    cout<<"Enter the character"<<endl;
    cin>>cValue;
    String *sobj1 = new String(cValue);
    

    bRet = sobj1->ChkAlpha();
    if(bRet ==TRUE)
    {
        cout<<"It is character"<<endl;
    }
    else
    {
        cout<<"It is not a character"<<endl;
    }

    
    return 0;
}