
// Q.1 Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;
    for (iCnt; iCnt < iNO; iCnt++)
    {
        printf("*");
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    
    return 0;
}




