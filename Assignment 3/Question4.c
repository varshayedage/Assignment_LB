/*
Q4. Accept one character from user and convert case of that character.
    Input :a                     Output : A
    Input :D                     Output : d
*/
#include<stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue<=90)
    {
        printf("%c\t",CValue+32);
    }
    else if(CValue>=97)
    {
        printf("%c\t",CValue-32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character: \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}