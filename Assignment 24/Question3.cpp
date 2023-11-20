/*
3. Accept character from user and check whether it is digit or not
   (0-9).
Input : 7
Output : TRUE
Input : d
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

        BOOL ChkDigit()
        {
            if((ch>='0')&&(ch<='9'))
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
    

    bRet = sobj1->ChkDigit();
    if(bRet ==TRUE)
    {
        cout<<"It is digit"<<endl;
    }
    else
    {
        cout<<"It is not a digit"<<endl;
    }

    
    return 0;
}