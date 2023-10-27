/*
1. Write a program which accept number from user and check whether it
    contain 0 in it or not.
    Input : 2395
    Output : There is no Zero
    Input : 1018
    Output : It contains Zero
    Input : 9000
    Output : It contains Zero
    Input : 10687
    Output : It contains Zero

*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo==0)
    {
        return TRUE;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return TRUE;
            break;
        }
       iNo = iNo/10;
    }
      return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet ==TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}