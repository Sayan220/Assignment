#include<iostream>
using namespace std;
class Pattern{
    int n;
    public: Pattern(int a){ n=a;}
        void tri();
};
void Pattern::tri(){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=(2*i)-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}

int main()
{
    Pattern ob(6);
    ob.tri();
    return 0;
}