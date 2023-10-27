/*
Q3. Write a program to find factorial of given number
    Input : 5
    Output : 120        {5*4*3*2*1}
    
    Input : -5
    Output : 120        {5*4*3*2*1}

    Input : 4
    Output : 24        {4*3*2*1}
*/
#include<stdio.h>
int Factorial(int iNo)
{
    int iFact = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo ==0)
    {
        return 1;
    }
    /*for(int i=1;i<=iNo;i++)
    {
        iFact = iFact*i;
    }
    return iFact;
    */
    iFact = (iNo*Factorial(iNo-1));
    return iFact;
    
}
int main()
{
    int iValue = 0,iRet  =0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("%d",iRet);
    return 0;
}