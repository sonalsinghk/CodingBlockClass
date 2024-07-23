#include<iostream>
using namespace std;
int main(){

    int arr[10]={1,4,3,-10,2,6,8,-4,5,7};
    int n = sizeof(arr)/sizeof(int);

    int ans=0, sum=0;

    for(int i=0;i<n;i++){

        sum+=arr[i];

        if(sum<0){
           sum=0;
        }
        if(sum>ans){
            ans=sum;
        }
    }    

    cout<<ans<<endl;
    return 0;
}   