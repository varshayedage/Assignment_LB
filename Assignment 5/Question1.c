/*
Q1. Write a program which accept name from user and print that name
    Input : Piyush Khairnar
    Outut : Piyush Khairnar
*/

#include<stdio.h>
int main()
{
    char Name[30];
    printf("Please enter full name \n");
    //gets(Name);
    fgets(Name,30,stdin);
    //scanf("%[^\n]%*c",Name);
    printf("Your name is %s ",Name);
    return 0;
}