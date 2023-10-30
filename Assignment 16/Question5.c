/*
Q5. Accept N numbers from user and display summation of digits of 
    each number.
    Input : 
            N : 6
            Elements : 8225   665  3   76  953   858
    Output :17  17  3   13  17  21
*/
#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0,iDigit = 0;
    int iSum = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            Arr[iCnt] = Arr[iCnt]/10;
            iSum = iSum+iDigit;
        }
        printf("%d\t",iSum);
        iSum=0;
    }
    printf("\n");
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
    DigitsSum(p,iSize);
    free(p);
    return 0;

}