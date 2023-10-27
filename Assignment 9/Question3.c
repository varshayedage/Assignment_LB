/*
Q3. Write a program which accept distance in kilometer and convert it
    into meter(1 kilometre = 1000 meter)
    Input : 5
    Output : 5000
    Input : 12
    Output : 12000
*/
#include<stdio.h>
int KMToMeter(int iNo)
{
    int iAns = 0;
    iAns = iNo*1000;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter distance:\n");
    scanf("%d",&iValue);
    iRet = KMToMeter(iValue);
    printf("%d\n",iRet);
    return 0;
}