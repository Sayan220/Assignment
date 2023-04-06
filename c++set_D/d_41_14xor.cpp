#include<iostream>
using namespace std;
class A{
    int a,b;
    public: A(){ a=0; b=0;}
        A(int x, int y){
            a=x;
            b=y;
        }
        friend void swap(A&);
};
void swap(A &r1){  
cout<<"\nthe numbers before swaping: "<<r1.a<<"  "<<r1.b;
    r1.a=r1.a ^ r1.b;         //bitwise XOR
    r1.b=r1.a ^ r1.b;
    r1.a=r1.a ^ r1.b;
    cout<<"\nthe numbers after swaping: "<<r1.a<<"  "<<r1.b;
}

int main()
{
    int a,b;
    cout<<"enter 1st number"<<endl;
    cin>>a;
    cout<<"enter 2nd number"<<endl;
    cin>>b;
    A ob(a,b);
    swap(ob);
    return 0;
}