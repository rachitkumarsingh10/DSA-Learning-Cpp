#include<iostream>
using namespace std;

class CalArea{
    public:
    int area;

    int Area(int r){
        return r*r*3.14;
    }

    int Area(int l,int b){
        return l*b;
    }



};

int main(){
    CalArea a1,a2;

    cout<<a1.Area(2)<<"\n";
    cout<<a2.Area(10,29)<<"\n";

    // cout<<a2.Area("Raman")<<"\n";   // Complie Time Error Will Be Throw


}