#include<iostream>
#include<string>
using namespace std;
class String_C{
    string s;
    public:
        String_C(){
           s = ""; 
        }
        String_C(string r){
            s = r;
        }
        void display(){
            cout<<"The string is : "<<s<<endl;
        }
        void join(string str1, string str2){
            string fullName = str1.append(str2);
            cout<<"the concatinated string:   "<<fullName<<endl;
        }
};

int main()
{
    string str1,str2;
    cout<<"\nenter the string: "<<endl;
    getline(cin, str1);
    String_C obj(str1);
    obj.display();
    cout<<"\nenter the 2nd string: "<<endl;
    getline(cin, str2);
    String_C ob;
    ob.join(str1,str2);
    return 0;
}