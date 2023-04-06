#include<iostream>
using namespace std;
class Time{
    int h,min,sec;
    public: Time(){ h=0; min=0; sec=0; }
        Time(int a, int b, int c){
            h=a;
            min=b;
            sec=c;
        }
    friend istream &operator>>( istream  &input, Time &t ) { 
        input >>t.h>>t.min>>t.sec;
        return input;            
    }
    friend ostream &operator<<( ostream &out, Time &t ) { 
        out <<t.h<<"h : "<<t.min<<"min : "<<t.sec<<"sec"<<endl;
        return out;            
    }
    friend void operator+(Time t1,Time t2);
    friend void operator==(Time t1,Time t2);
};
void operator+(Time t1,Time t2){
    Time tem3;
    tem3.sec = ( t1.sec+t2.sec ) % 60;
    tem3.min = ( t1.min+t2.min + ((t1.sec+t2.sec)/60) ) % 60;
    tem3.h = ( t1.h+t2.h + ( (t1.min+t2.min) + (t1.sec+t2.sec)/60 )/60 );
    cout<<"\nafter addition: ";
    cout<<tem3;
}
void operator==(Time t1,Time t2){
    if(t1.h==t2.h && t1.min==t2.min && t1.sec==t2.sec){
        cout<<"\nthe given times are equal";
    }
    else{
        cout<<"\nthe given times are not equal";
    }
}
int main()
{
    Time t1,t2;
    cout<<"\nenter the 1st time :  ";
    cin>>t1;
    cout<<"\nenter the 2nd time :  ";
    cin>>t2;
    cout<<"\nthe time: "<<t1<<endl;
    cout<<"\nthe time: "<<t2<<endl;
    t1+t2;
    t1==t2;
    return 0;
}