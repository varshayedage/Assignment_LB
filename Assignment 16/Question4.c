/*
Q4. Accept N numbers from user and display all such numbers which
    contains 3 digits in it.
    Input : 
            N : 6
            Elements : 8225 665 3   76  953 858
    Output :665 953 858
*/
#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int iCnt = 0,iDigit = 0,iDigitCnt=0 ,iValue = 0 ;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iValue=Arr[iCnt];
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            Arr[iCnt] = Arr[iCnt]/10;
            iDigitCnt ++;
        }
        if(iDigitCnt==3)
        {
            printf("%d\t",iValue);
        }
        iDigitCnt =0;
    }
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue=0;
    int *p = NULL;
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);
    p = (int*)malloc(iSize*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits(p,iSize);
    free(p);
    return 0;

}