/*
Q3. Accept N numbers from user and check whether that numbers contains
    11 in it or not.
    Input : 
            N : 6
            Elements : 85   66  22   80  93  88
    Output : 11 is  present
    Input : 
            N : 6
            Elements : 85   66  3   80  93  88
    Output : 11 is  absent
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           bFlag = TRUE;
           break;
        }
    }
   return bFlag;
}

int main()
{
   int iSize = 0,iCnt = 0;
   BOOL bRet = FALSE;
   int *p = NULL;
   printf("Enter number of elements :\n");
   scanf("%d",&iSize);

   p=(int*)malloc(iSize*sizeof(int));
   if(p==NULL)
   {
       printf("Unable to allocate memory\n");
       return -1;
   }
   printf("Enter %d elements :\n",iSize);
   for (iCnt=0;iCnt<iSize;iCnt++)
   {
       printf("Enter element %d : ",iCnt+1);
       scanf("%d",&p[iCnt]);
   }
 
    bRet = Check(p,iSize);
    printf("Result is %d\n",bRet);
    if(bRet ==TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
      printf("11 is absent\n");

    }

    free(p);

    return 0;
}