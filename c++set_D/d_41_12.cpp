#include<iostream>
#include<string.h>
using namespace std;
class Concate
{
    char s[100];
    public:
        void get()
        {
            cin.getline(s,100);
        }
        void display()
        {
            cout<<"\nthe string:  "<<s<<endl;
        }
        Concate operator +(Concate s1)
        {
            Concate s2;
            strcpy(s2.s,s);
            strcat(s2.s,s1.s);
            return s2;
        }
        void reverse(){
            cout<<"\nthe reversed string: "<<strrev(s)<<endl;
        }
};
int main()
{
    Concate s1,s2,s3;
    cout<<"Enter first string value : "<<endl;
    s1.get();
    cout<<"Enter second string value : "<<endl;
    s2.get();
    s1.display();
    s2.display();
    s3=s1+s2;
    cout<<endl<<"After concatenation : ";
    s3.display();
    s3.reverse();
    return 0;
}