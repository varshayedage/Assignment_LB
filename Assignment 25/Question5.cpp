/*
5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : 
Decimal    65
Octal   0101
HexaDecimal 0x41

*/
#include<iostream>
using namespace std;
class String
{
    private :
    char ch;
    public:
    String(char C)
    {
        ch =C;
    }
    ~String()
    {

    }
    void Display()
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("HexaDecimal : %x\n",ch);
    }
};
int main()
{
    char cValue = '\0';
    cout<<"Enter the character"<<endl;
    cin>>cValue;
    String sobj(cValue);
    sobj.Display();

    return 0;
}