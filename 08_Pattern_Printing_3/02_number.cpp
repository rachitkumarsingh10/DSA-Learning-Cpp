#include<iostream>
using  namespace std;
int main(){

    cout<<endl;
    int num;
    cout<<"num=";
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int column=1;column<=num-row;column++){
        // cout<<"#";
        cout<<" ";
        }
        for(int column2=1;column2<=row;column2++){
        cout<<row; 
        }
        cout<<endl;
}

        cout<<endl;
        for(int row=1;row<=num;row++){
        for(int column=1;column<=num-row;column++){
        // cout<<"#";
        cout<<" ";
        }
        for(int column2=1;column2<=row;column2++){
        cout<<column2; 
        }
        cout<<endl;
}

}