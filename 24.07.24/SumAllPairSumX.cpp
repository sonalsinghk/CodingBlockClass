#include<iostream>
using namespace std;
void SumAllPairX(int a[], int n, int X){
    
    int no1;
    for(int i=0;i<n;i++){
        no1=a[i];
        int no2 = X-no1;
        for(int j=i+1;j<n;j++){
            if(a[j]==no2){
                cout<<"("<<no1<<","<<no2<<"),";
            }
        }
    }
}
int main(){

    int a[]={1,2,4,6,8,1,0,9,3,4,5};
    int n = sizeof(a)/sizeof(int);

    SumAllPairX(a,n,10);
    return 0;
}