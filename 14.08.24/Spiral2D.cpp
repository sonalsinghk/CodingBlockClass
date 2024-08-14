#include<iostream>
using namespace std;
void spiralPrint(int a[][100], int n, int m){
     int sr=0,er=n-1,sc=0,ec=m-1;
     while(sc<=ec && sr<=er){
          for(int col=sc;col<=ec;col++){
            cout<<a[sr][col]<<" ";
          }
          sr++;
          for(int row=sr;row<=er;row++){
             cout<<a[row][ec]<<" ";
          }
          ec--;
          if(er<=sr){
            for(int col=ec;col>=sc;col--){
              cout<<a[er][col];
          }
          er--;
          }
          if(ec>=sc){
            for(int row=er;row>=sr;row--){
                cout<<a[row][sc]<<" ";
            }
            sc++;
          }
          
     }
}
int main(){
    int a[100][100];
    int row, col, numbers=1;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j] = numbers++;
        }
    }
    spiralPrint(a,row,col);

    return 0;
}
