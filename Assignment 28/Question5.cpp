/*
5. Write a program which accept string from user reverse that string
inplace.
Input : "abcd"   
Output : "dcba"
Input : "abba"   
Output : "abba"

*/
#include<iostream>
using namespace std;
class String
{
    private :
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
    void accept()
    {
        cout<<"Enter the String"<<endl;
        cin.getline(str,iSize);
    }
    void Reverse()
    {
        int iCnt =0;
        char Arr[iSize];

        while(*str !=0)
        {
            Arr[iCnt] =*str;
            iCnt++;
            str ++;
        }
        char temp = '\0';
        int end = iCnt/2;
        for(int i=0;i<end;i++)
        {
           temp = Arr[i];
           Arr[i]=Arr[iCnt] ;
           Arr[iCnt]=temp;
           iCnt--;
        }
        end =iCnt*2;
        for(int i=1;i<=end;i++)
        {
            cout<<Arr[i];
        }         
    }
};
int  main()
{
    String *sobj = new String(30);
    sobj->accept();
    sobj->Reverse();   
    return 0;
}