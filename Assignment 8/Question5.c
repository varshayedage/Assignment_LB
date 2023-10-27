/*
Q5. Write a program which return the difference between Even factorial 
    and odd facrorial given number.
    Input : 5
    Output : -7      {8-15}
    Input : -5
    Output : -7     {8-15}
    Input : 10
    Output : 2895     {3840-945}
*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iFact1 = 1;
    int iFact2 = 1;
    int iAns = 0;
    int iCnt = 1;
    if(iNo <0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFact1 = iFact1*iCnt;
        }
        else
        {
            iFact2 = iFact2*iCnt;
        }
    }
    iAns = iFact1-iFact2;
    return iAns;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    iRet = FactorialDiff(iValue);
    printf("factorial difference is %d\n",iRet);
    return 0;
}