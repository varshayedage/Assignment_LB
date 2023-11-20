/*
1.Accept number of rows and number of columns from user and display 
below pattern.
Input : iRow = 4        iCol =4
Output :
*
*       *
*       *       *
*       *       *       * 
*/

#include<iostream>
using namespace std;
class Pattern
{
    private:
        int iRow;
        int iCol;
    public:
        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
            int i =0,j=0;
            for(i = 1;i<=iRow;i++)
            {
                for(j = 1;j<=i;j++)
                {
                    cout<<"*\t";
                }
                cout<<endl;
            }
        }
};
int main()
{
    int iValue1 = 0,iValue2 = 0;
    cout<<"Enter number of rows : "<<endl;
    cin>>iValue1;
    cout<<"Enter number of columns : "<<endl;
    cin>>iValue2;
    Pattern *pobj = new Pattern(iValue1,iValue2);
    pobj->Display();

    delete pobj;
    return 0;
}