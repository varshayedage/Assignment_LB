/*
2. Accept character from user and check whether it is capital or not
   (A-Z ).
Input : F
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

        BOOL ChkCapital()
        {
            if((ch>='A')&&(ch<='Z'))
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
    

    bRet = sobj1->ChkCapital();
    if(bRet ==TRUE)
    {
        cout<<"It is capital character"<<endl;
    }
    else
    {
        cout<<"It is not a capital character"<<endl;
    }

    
    return 0;
}