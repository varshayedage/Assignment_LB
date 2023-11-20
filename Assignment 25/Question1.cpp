/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal,Hexadecimal and octal representations of every member from 
0 to 255.
*/
#include<iostream>

using namespace std;
class ASCII
{
    public:
    void Display()
    {
        int iCnt =0;
        for(iCnt=0;iCnt<=255;iCnt++)
        {
            printf("%d\t%c\t%x\t%o\n",iCnt,iCnt,iCnt,iCnt);
        }
        cout<<endl;
    }
};
int main()
{
    ASCII aobj;
    aobj.Display();
    return 0;
}