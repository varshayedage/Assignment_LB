/*
Q3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5        iCol = 5
Output :
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iCnt = 1;
    for(i=1;i<=iRow;i++)
    {
        char ch = 'a';
        for(j = 1;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }
        }
    printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}