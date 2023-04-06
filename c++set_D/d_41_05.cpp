#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        Complex(int a){
            real=a;
            img=a;
        }
        Complex(int a, int b){
            real=a;
            img=b;
        }
        void show(){
            cout<<"\n the complex number: "<<real<<" + "<<img<<"i"<<endl;
        }
        Complex sum(Complex a){
            Complex t;
            t.real = a.real + real;
            t.img = a.img + img;
            return t;
        }

};
int main()
{
    Complex ob1(5),ob2(7,2),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1.sum(ob2);
    cout<<"\nafter addition"<<endl;
    ob3.show();
    return 0;
}