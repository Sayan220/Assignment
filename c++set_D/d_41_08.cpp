#include<iostream>
using namespace std;
class DEMO{
    int a,b;
    public:
        DEMO(){
            a=0;
            b=0;
        }
        DEMO(int x, int y){  //parameterized constructor
            a=x;
            b=y;
        }
        DEMO(DEMO &s){      //copy constructor
            a=s.a;
            b=s.b;
        }
        void display(){
            cout<<a<<"  "<<b<<endl;
        }
};

class base {
  public:
    base()    
    { cout << "Constructing base\n"; }
    virtual~base()
    { cout << "Destructing base\n"; }    
};
 
class derived : public base {
  public:
    derived()    
    { cout << "Constructing derived\n"; }
    ~derived()
    { cout << "Destructing derived\n"; }
};

int main()
{
    DEMO ob(4,2);
    DEMO con(ob);  //copy constructor called
    ob.display();
    con.display();
    base *d = new derived();      //when base class pointer points to derived class object we can call(unhides) the base class funtion
    delete d;                     //(in function overriding)
    return 0;                     //and only the base class destructor is called. So we use virtual to call both the destructors
}