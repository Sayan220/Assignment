#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
    float s1,s2,s3;
    public:
        void input(){
            cout<<"enter 1st side "<<endl;
            cin>>s1;
            cout<<"enter 2nd side "<<endl;
            cin>>s2;
            cout<<"enter 3rd side "<<endl;
            cin>>s3;
        }
        float area(){
            float a,s;
            s=(s1+s2+s3)/2;
            a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
            return a;
        }
        void display();
        float perimeter();
};

float Triangle::perimeter(){
    float p;
    p = s1+s2+s3;
    return p;
}

void Triangle::display(){
   float t1 = area();
   cout<<"area of the triangle: "<<t1<<endl;
   float t2 = perimeter();
   cout<<"perimeter of the triangle: "<<t2<<endl;
} 

int main()
{
    Triangle ob;
    ob.input();
    ob.display();
    return 0;
}