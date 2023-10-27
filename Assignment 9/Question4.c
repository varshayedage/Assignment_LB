/*
Q4. Write a program which accept temperature in Fahrenheit and convert
    it into celsius.(1 celsius = (Fahrenheit-32)*(5/9)).
    Input : 10
    Output : -12.2222(10-32)*(5/9)
    Input : 34
    Output : 1.111111(34-32)*(5/9)
*/
#include<stdio.h>
double FHtoCS(float fTemp)
{
    double fAns = 0.0;
    fAns = ((fTemp-32)*(5/9));
    return fAns;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter temprature in Farhenheit\n");
    scanf("%f",&fValue);
    dRet = FHtoCS(fValue);
    printf("%f\n",dRet);
    return 0;
}