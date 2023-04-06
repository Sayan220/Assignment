#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class A{
    public:
        void calculate(int m,char ch){
            int d=0,rev=0,n=0;
            n=m;
            while(n>0){
                d=n%10;
                rev=rev*10+d;
                n=n/10;
            }
            cout<<"\nthe reverse of the digit is: "<<rev<<endl;
        }
        void calculate(char ch,int m){
            int i,c=0;
            for(i=2;i<sqrt(m);i++){
                if(m%i==0){
                    c=1;
                    break;
                }
            }
            if(c==1){
                cout<<"\nnot a prime number"<<endl;
            }
            else{
                cout<<"\nprime number"<<endl;
            }
        }
};

int main()
{
    A ob;
    int num; char ch;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<=9){
        cout<<"\nthe number has less than 2 digits"<<endl;
        return 0;
    }
    while(1){
        cout<<"\nr for Reverse the digit\np to check for Prime or not\no for EXIT\t\tEnter choice:  ";
        cin>>ch;
        switch(ch){
            case 'r': ob.calculate(num,ch);
                break;
            case 'p':  ob.calculate(ch,num);
                break;
            case 'o': cout<<".............................Exit.........................................";
                exit(0);   
            default : cout<<"\n wrong choice..try again.."<<endl;
                break;      
        }
    }
    return 0;
}