 #include<iostream>
 using namespace std;
 inline double square(double x)
 {
     return  x*x;
 }
 int main()
 {
     double a;
     cout<<"Enter the number: ";
     cin>>a;
     cout<<"The square of the number is "<<square(a);
 }