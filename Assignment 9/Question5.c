/*
Q4.c Write a program which accept area in square feet and convert it
    into square meter.(1 square feet = 0.0929 square meter)
    Input : 5
    Output : 0.464515

    Input : 7
    Output : 0.650321
*/
#include<stdio.h>
double SquareMeter(int iNo)
{
    float fAns = 0.0f;
    fAns = iNo*0.0929f;
    return fAns;
}
int main()
{
    int iValue = 0.0;
    double dRet = 0.0;
    printf("Enter Area in square feet\n");
    scanf("%d",&iValue);
    dRet = SquareMeter(iValue);
    printf("%f\n",dRet);
    return 0;
}