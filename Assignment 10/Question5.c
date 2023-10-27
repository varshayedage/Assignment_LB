/*
Q1. Write a program which accept range from user and display all numbers
    in between that range
    Input : 23  35
    Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
    Input : 10  18
    Output : 10 11 12 13 14 15 16 18

    Input : 10  10
    Output : 10

    Input : -10  2
    Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

    Input : 90    18
    Output : Invallid range
*/
#include<stdio.h>
void RangeDisplayRev(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }
    int Start = iNo1;
    int End = iNo2;
    for(Start =iNo2;Start>=iNo1;Start--)
    {
        printf("%d\t",Start);
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter starting point\n");
    scanf("%d",&iValue1);
    printf("Enter Ending point\n");
    scanf("%d",&iValue2);
    RangeDisplayRev(iValue1,iValue2);
    return 0;
}