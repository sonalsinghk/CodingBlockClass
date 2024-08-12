#include<iostream>
using namespace std;
int main(){
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = sizeof(a)/sizeof(a[0]);
    int col = sizeof(a[0])/sizeof(int);
    bool isKeyFound=false;
    int key;
    cout<<"Enter key:"<<endl;
    cin>>key;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==key){
                cout<<"("<<i<<","<<j<<")";
                isKeyFound = true;
                break;
            }
        }
        if(isKeyFound){
            break;
        }
    }
    if(!isKeyFound){
        cout<<"Not found"<<endl;
    }
    return 0;
}
