#include<iostream>
using namespace std;
int main(){

    int arr[10]={1,2,-1,4,-10,6,3,-20,4,1};
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
        //circular sum

    int ans2=0, totalSum=0;
    for(int i=0;i<n;i++){

         totalSum+=arr[i];
         arr[i]*=-1;
    }    
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
        if(sum2<0){
            sum2=0;
        }
        if(sum2>ans2){
            ans2=sum2;
        }
    }
   int op1 = ans;
   int op2 = totalSum+ans2;
   cout<<max(op1,op2)<<endl;

    return 0;
}