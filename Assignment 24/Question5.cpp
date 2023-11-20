/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 division in school as A ,B,C,D. 
Exam of division A at 7 AM.B at 8.30 AM, C at 9.20 AM,D at 10.30 AM.
(Application should be Case inSensitive).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<iostream>
using namespace std;
class String 
{
    private:
        char ch;
        
    
    public:
        String(char C)
        {
           ch = C;
        }
        ~String()
        {
            
        }

       void DisplaySchedule()
       { 
           switch (ch)
               {
               case 'a':
                   cout<<"Exam of division "<<ch<<" at 7 AM"<<endl;
                   break;
               case 'A':
                   cout<<"Exam of division "<<ch<<" at 7 AM"<<endl;
                   break;
               case 'b':
                   cout<<"Exam of division "<<ch<<" at 8.30 AM"<<endl;
                   break;
               case 'B':
                   cout<<"Exam of division "<<ch<<" at 8.30 AM"<<endl;
                   break;
               case 'c':
                   cout<<"Exam of division "<<ch<<" at 9.20 AM"<<endl;
                   break;
               case 'C':
                   cout<<"Exam of division "<<ch<<" at 9.20 AM"<<endl;
                   break;
               case 'd':
                   cout<<"Exam of division "<<ch<<" at 10.30 AM"<<endl;
                   break;
               case 'D':
                   cout<<"Exam of division "<<ch<<" at 10.30 AM"<<endl;
                   break;  
               default:
                   cout<<"Please Enter valid division"<<endl;
                   
               }
        }
};
int main()
{
    char cValue ='\0';
    cout<<"Enter your division"<<endl;
    cin>>cValue;
    String *sobj = new String(cValue);
    sobj->DisplaySchedule();

    
    return 0;
}