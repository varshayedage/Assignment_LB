/*
Q5. Accept one character from user and check whether that character is 
    Vowel(a,e,i,o,u) or not
    Input :E                        Output : TRUE
    Input : d                      Output : FALSE
*/
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL chkVowel(char CValue)
{
    if(CValue=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character: \n");
    scanf("%c",&cValue);
    bRet = chkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    return 0;
}