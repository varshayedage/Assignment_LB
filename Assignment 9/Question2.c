/*
Q2. Write a program which accept width & height of rectangle from user 
    and calculate its area.(Area = Height*Width).
    Input : 5.3    9.78
    Output : 51.834
*/
#include<stdio.h>
double RectArea(float FValue1,float FValue2)
{
    double dAns = 0.0;
    dAns = FValue1*FValue2;
    return dAns;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;
    printf("Enter Height\n");
    scanf("%f",&fValue1);
    printf("Enter Width\n");
    scanf("%f",&fValue2);
    dRet = RectArea(fValue1,fValue2);
    printf("%.4f\n",dRet);
    return 0;
}