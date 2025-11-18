#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(5,1);
    cout<<"Size of V is "<< v.size()<<endl;
    cout<<"Capacity of V is "<< v.capacity()<<endl;


    v.push_back(12);

    cout<<"Size of V is "<< v.size()<<endl;
    cout<<"Capacity of V is "<< v.capacity()<<endl;

    vector<int>v1={1,2,3,4,5};

    for(int x:v1){
        cout<<x<<"\t";
    }
}
