#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number = ";
    cin>>num;
    for(int row=1;row<= num; row++){


        for( int col1=1;col1<=num-row;col1++){
            cout<<" ";
        }
        // for( int col2=1;col2<=row;col2++){
        //     cout<<"*";
        // }
        //  for( int col3=1;col3<row;col3++){
        //     cout<<"*";
        // }

        for(int col=1;col<=2*row-1;col++){
            cout<<"*";
        }


         cout<<endl;
    }
   
}

//     *
//    ***
//   *****
//  *******
// *********