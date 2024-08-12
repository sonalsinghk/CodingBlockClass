#include<iostream>
using namespace std;
int main(){

    int a[4][4] = {{1,2,3,4},
                   {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}
                  };
    int m=4, n=4;

    for(int col=0;col<m;col++){
        if(col%2==0){       //col even
           for(int row=0;row<n;row++){
               cout<<a[row][col]<<" ";
           }
        }
        else{             //col odd
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
