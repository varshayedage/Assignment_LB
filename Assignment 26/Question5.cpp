/*
5. Write a program which accept string from user and display it in reverse order.
Input : "MarvellouS"
Outout : "SuollevraM"

*/
#include<iostream>
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
    void Reverse()
    {
        char Arr[iSize];
        int iCnt = 0;
        while(*str !='\0')
        {
            Arr[iCnt]=*str;
            str++;
            iCnt++;
        }
        for(int i = iCnt-1;i>=0;i--)
        {
            cout<<Arr[i];
        }
    }
};
int main()
{ 
    String  *sobj = new String(30);
    sobj->accept();
    sobj->Reverse();
    return 0;
}