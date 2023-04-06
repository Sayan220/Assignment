#include<iostream>
using namespace std;
class Year{
    int y;
    public:
         Year(){
            y=0;
         }
         Year(int a){
            y=a;
         }
         ~Year(){
            if(y%100==0){
                if(y%400==0){
                    cout<<"leap year"<<endl;
                }
                else{
                    cout<<"not a leap year"<<endl;
                }
            }
            else if(y%4==0){
                cout<<"leap year"<<endl;
            }
            else{
                cout<<"not a leap year"<<endl;
            }
         }
};
int main()
{
    int date;
    cout<<"enter the date:  ";
    cin>>date;
    Year ob(date);
    return 0;
}