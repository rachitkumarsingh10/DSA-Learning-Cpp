#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v={1,2,3,4,5};

    for(int x:v){
        cout<<x<<"\t";
    }
    cout<<endl;
    cout<<"Size of V is "<< v.size()<<endl;
    cout<<"Capacity of V is "<< v.capacity()<<endl;

    v.pop_back();
    v.pop_back();

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;    
    cout<<"Size of V is "<< v.size()<<endl;
    cout<<"Capacity of V is "<< v.capacity()<<endl;


    
    
    
    
    
    
    

}
