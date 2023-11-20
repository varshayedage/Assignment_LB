/*
5. Write a program which accept string from user and count number of 
white spaces
Input : "Marvellous"
Output : 0
Input : "Marvellous Infosystems"
Output : 1
Input : "Marvellous Infosystems by piyush manohar khairanar"
Output : 5
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


        int CountSpace()
        {
            int iCnt =0;            
            while(*str != '\0')
            {
                if(*str == ' ')
                {
                   iCnt++; 
                }
                str++;
            }
            return iCnt;
        }
};
int main()
{
    int iRet =0;
    String *sobj1 = new String(30);
    sobj1->Accept();
    iRet =sobj1->CountSpace();
    cout<<iRet<<endl;
    return 0;
}