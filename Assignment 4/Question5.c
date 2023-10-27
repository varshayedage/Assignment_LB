/*
Q5. Write a Program which accept number from user and return
    difference between summation of all its factors and non factors.
    Input : 12
    Output :-34    {16  -50} 

    Input : 10
    Output : -29   {8 -37} 
*/
#include<stdio.h>
int FactDiff(int iNo)
{
    int iAns = 0;
    int iAns1 = 0;
    int iAns2 = 0;
    int iCnt = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iAns1 +=iCnt;
        }
        else if(iNo%iCnt!=0)
        {
            iAns2 +=iCnt;
        }
    }
    iAns = iAns1-iAns2;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("%d\n",iRet);
    return 0;
}