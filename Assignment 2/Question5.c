#include<stdio.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if (iNo%2 ==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}   

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);
    if (bRet)
    {
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    
    return 0;
}