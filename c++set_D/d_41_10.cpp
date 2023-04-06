#include<iostream>
#include<stdlib.h>
using namespace std;
#define PI 3.14

class A{
    public:
        void volume(int a){                            //cube..........
            cout<<"\nvolume of the cube:"<<endl;
            int v = a*a*a;
            cout<<v<<endl;
        }
        void volume(int l, int w, int h){               //cuboid..............
            cout<<"\nvolume of the cuboid:"<<endl;
            int v = l*w*h;
            cout<<v<<endl;
        }
        void volume(float con ,float r,float h){       //cone..............
            cout<<"\nvolume of the cone:"<<endl;
            float v = con*PI*r*r*h;
            cout<<v<<endl;
        }
        void volume(float r,float h){                //cylinder.................
            cout<<"\nvolume of the cylinder:"<<endl;
            float v = PI*r*r*h;
            cout<<v<<endl;
        }
        void volume(float r){                         //sphere...................
            cout<<"\nvolume of the sphere:"<<endl;
            float v = 1.333*PI*r*r*r;
            cout<<v<<endl;
        }
};

int main()
{
    A ob;
    int ch,length,width,height,side;
    float r,fh,con;
    while(1){
        cout<<"\n1 for cube\n2 for cuboid\n3 for cone\n4 for cylinder\n5 for sphere\n6 for EXIT....\n\nenter choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<"\nenter the side of the cube"<<endl;   //volume of cube.............
                cin>>side;
                ob.volume(side);
                break;

            case 2: cout<<"\nenter length, width & height"<<endl;   //volume of cuboid.............
                cin>>length>>width>>height;
                ob.volume(length,width,height);
                break;

            case 3: cout<<"\nenter base radius & height"<<endl;      //volume of cone................
                cin>>r>>fh;
                con = 0.333;  
                ob.volume(con,r,fh);
                break;

            case 4: cout<<"\nenter base radius & height"<<endl;      //volume of cylinder.............................
                cin>>r>>fh;  
                ob.volume(r,fh);
                break; 

            case 5: cout<<"\nenter the radius of the sphere"<<endl;  //volume sphere........
                cin>>r;
                ob.volume(r);
                break;

            case 6: cout<<"\nEXIT..............................\n";
                exit(0);
            default: cout<<"\nwrong choice\ttry again....................\n";
                break;        
        }
    }
    return 0;
}