#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<string,int>p1;

    p1=make_pair("rachit",292);

    //p1.first="Rachit";
    //p1.second="292"

    cout<<p1.first<<" "<<p1.second<<endl;

    // To store 3 value 

    pair<string, pair<int,int>>p2;
    //-> pair< pair<string,int> ,     int>p2;

    p2.first="Rachit";
    p2.second.first=292;
    p2.second.second=49;
    
    // p2= make_pair("Rachit",make_pair(292,49));

    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;




}
