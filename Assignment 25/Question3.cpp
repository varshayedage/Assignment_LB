/*
3.Accept character from user . If it is capital then display all the 
character from the input character till Z. If input character is small 
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output :Q   R   S   T   U   V   W   X   Y   Z
Input : m
Output :m   l   k   j   i   h   g   f   e   d   c   b   a
Input : 8
Output:
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
            while(ch >= 'a')
            {
                cout<<ch<<"\t";
                ch--;
            }
            cout<<endl;
        }
        else if(ch>='A' && ch<='Z')
        {
            
            while(ch <= 'Z')
            {
                cout<<ch<<"\t";
                ch++;
            }
            cout<<endl;
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