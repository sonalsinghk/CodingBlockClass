#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    cin>>rows>>cols;
    int **arr = new int* [rows];

    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
    }
    int numbers = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]= numbers++;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //To delete the allocated heap memory
    //Delete 2D array
    for(int i=0;i<rows;i++){
        delete []arr[i];
    }
    //Delete all cols
    delete []arr;
    //Arr ko null point karwao
    arr=NULL;
    return 0;
}
