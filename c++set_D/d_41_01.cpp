#include<iostream>
using namespace std;
#define PI 3.14
class Circle{
    private: float r1;
    public: 
        float r2;
        void area();
        void input(){
            cout<<"enter the value of r: ";
            cin>>r1;
        }
    protected:
        float r3;    
};
 void Circle::area(){
    cout<<"area of circle (private variable r1 by using own class functions )"<<endl;
    float a;
    a = PI*r1*r1;
    cout<<a<<endl;
 }

 class B : public Circle{
    public: 
       void dev_input(){
            cout<<"enter the value of r: ";
            cin>>r3;
       }
       void area2()
        {
            cout<<"area of circle (protected variable r3 by using inheritence)"<<endl;
            float a;
            a = PI*r3*r3;
            cout<<a<<endl;
        }
 };

 int main()
 {
    Circle ob;
    ob.input();
    ob.area();
    B cir;
    cir.dev_input();
    cir.area2();
    cout<<"\n(public variable r2 is available throughout the program)\n";
    ob.r2=4;
    cout<<"area of cirle of radius 4 is :   "<<PI*ob.r2*ob.r2;
    //ob.r1; not possible cuz r1 is private
    return 0;
 }