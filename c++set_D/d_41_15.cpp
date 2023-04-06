#include<iostream>
using namespace std;
class Complex{
    float real,img;
    public:
        Complex(){
            real=0.0;
            img=0.0;
        }
        Complex(float a, float b){
            real=a;
            img=b;
        }
        void show(){
            cout<<"\n the complex number: "<<real<<" + "<<img<<"i"<<endl;
        }
        friend Complex sum(Complex,Complex);
};
Complex sum(Complex a,Complex b){
    Complex t;
    t.real = a.real + b.real;
    t.img = a.img + b.img;
    return t;
}
int main()
{
    float r1,i1,r2,i2;
    cout<<"\nenter the 1st complex number\n real & imaginary part"<<endl;
    cin>>r1>>i1;
    cout<<"\nenter the 2nd complex number\n real & imaginary part"<<endl;
    cin>>r2>>i2;
    Complex ob1(r1,i1),ob2(r2,i2),ob3;
    ob1.show();
    ob2.show();
    ob3=sum(ob1,ob2);
    cout<<"\nafter addition"<<endl;
    ob3.show();
    return 0;
}