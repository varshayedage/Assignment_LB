/*
2. Accept character from user . If character is small display its
corresponding capital character,and if it is small then display its
corresponding capital.In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
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
        if(ch>='a' && ch<='z')
        {
            ch = ch-32;
            cout<<ch<<endl;
        }
        else if(ch>='A' && ch<='Z')
        {
            ch = ch+32;
            cout<<ch<<endl;
        }
        else
        {
            cout<<ch<<endl;
        }
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