/*
Q1. Write a Program which accept one number from user and display its 
    Multiplication of factors.
    Input : 12
    Output : 144  {1*2*3*4*6} 

    Input : 13
    Output : 1    {1}

    Input : 10
    Output : 10  {1*2*5} 
*/

#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo==0)
    {
        return 0;
    }
    for ( iCnt = 1; iCnt <=iNo/2; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iAns*=iCnt;
        }
    }
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet = MultiFact(iValue);
    printf("%d\n",iRet);
    return 0;
}