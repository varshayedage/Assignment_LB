/*
Q3. Write a program which accept range from user and return addition of 
    all even numbers in between that range(range should contain positive
     numbers only).
    Input : 23  30
    Output : 108

    Input : 10  18
    Output : 70

    Input : -10  2
    Output : Invalid Range

    Input : 90    18
    Output : Invallid range
*/
#include<stdio.h>
int RangeSumEven(int iNo1,int iNo2)
{
    int iSum =0;
    for(int i = iNo1;i<=iNo2;i++)
    {
        if(i%2==0)
        {
        iSum = iSum+i;
        }
    }
    return iSum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;
    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    printf("Enter Ending point\n");
    scanf("%d",&iValue2);
    if(iValue1>iValue2||iValue1<0)
    {
        printf("Invalid number\n");
        return 1;
    }
    iRet = RangeSumEven(iValue1,iValue2);
    printf("Addition is %d\n",iRet);
    return 0;
}
