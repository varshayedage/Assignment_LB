
// Q.5 Accept one number from user and print that number of * on screen
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void Accept(int iNo)
{
    int iCnt= 0;
    for (iCnt = 1;iCnt<=5;iCnt++)
    {
        printf("*");
    }
    
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    
    return 0;
}