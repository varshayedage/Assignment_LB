/*
Q3. Write a program which accept one number from user and print even 
    factors of that number.
    Input :36
    Output : 2  6   12  18
*/
#include<stdio.h>
void DisplayEvenFactors(int iNo)
{   int i = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for (int i = 1; i <=iNo/2; i++)
    {
        if(iNo%i==0&&i%2==0)
        {
            printf("%d\t",i);
        }
    }
    


}
int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayEvenFactors(iValue);
    return 0;
}