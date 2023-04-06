#include<iostream>
using namespace std;
class Number_List{
    int *a,n,i,j;
    public: 
        Number_List(int a){
            n=a;
        }
        void create();
        void display();
        void sort();
        void maximum();
        void minimum();
};

void Number_List::create(){
    a = new int[n];
    cout<<"\nenter elements in the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
}
void Number_List::display(){
    cout<<"\nthe array:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
void Number_List::sort(){
    int t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"\nsorted array...."<<endl;
    display();
}
void Number_List::maximum(){
    int b=a[0];
    for(i=0;i<n;i++){
        if(a[i]>b)
            b=a[i];
    }
    cout<<"\nthe maximum element:"<<b<<endl;
}
void Number_List::minimum(){
    int b=a[0];
    for(i=0;i<n;i++){
        if(a[i]<b)
            b=a[i];
    }
    cout<<"\nthe minimum element:"<<b<<endl;
}

int main()
{
    cout<<"Enter the size of the array:"<<endl;
    int num;
    cin>>num;
    Number_List ob(num);  
    ob.create();
    ob.display();
    ob.sort();
    ob.maximum();
    ob.minimum();
    return 0;

}