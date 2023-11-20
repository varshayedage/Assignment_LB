/*
4. Accept character from user and check whether it is Small case or not
   (a-z).
Input : g
Output : TRUE
Input : D
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

        BOOL ChkSmall()
        {
            if((ch>='a')&&(ch<='z'))
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
    

    bRet = sobj1->ChkSmall();
    if(bRet ==TRUE)
    {
        cout<<"It is Small case character"<<endl;
    }
    else
    {
        cout<<"It is not a small case character"<<endl;
    }

    
    return 0;
}