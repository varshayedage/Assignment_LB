/*
Q5. Write a program which accept total marks from user numbers and 
    Calculate percentage.
    Input : 1000  745
    Output : 74.5%
*/
#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{   
    float fAns =0.0;
    fAns=((float)iNo2/iNo1*100.0);
    return fAns;
}
int main()
{
    int iValue1 = 0,iValue2 =0;
    float fRet = 0.0;
    printf("Please enter total marks :\t");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :\t");
    scanf("%d",&iValue2);
    if(iValue1==0)
    {
        printf("Invalid number\n");
    }
    else
    {
    fRet = Percentage(iValue1,iValue2);
    printf("%.2f %%",fRet);
    }
    return 0;
}