/*
Q2.Accept number of rows and number of columns from user and display
below Pattern.
Input :     iRow = 4        iCol = 4
Output:
*       *       *       *
*       *       *       #
*       *       #       #
*       #       #       #
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0,k=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=i;j--)
        {
            printf("*\t");
        }
        for(k=1;k<i;k++)
        {
            printf("#\t");
        }
       
       printf("\n");
    }
    
}
int main()
{
    int iValue1 = 0,iValue2 =0;
    printf("Enter number of rows and columns : \n");
    scanf("%d%d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);
}