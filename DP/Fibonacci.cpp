#include<iostream>
#include<stdlib.h>
using namespace std;
int topdown(int n, int* dp){     //recursion + memoization = TOP down approach
    if(n==0 || n==1){
        dp[n] = n;               //storing 0 and 1 i.e dp[0] = 0
        return n;
    }
    if(dp[n]!= -1){
        return dp[n];
    }
    else{
        return dp[n] = topdown(n-1,dp) + topdown(n-2, dp);    //dp[5] = dp[4]+dp[3]
    }
}
int bottomUp(int n){                                         //iteration = BOTTOM UP
    
    int dp[1000];
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++){                          
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int dp[1000], n;
    cin>>n;
    memset(dp,-1,sizeof dp);
    cout<<topdown(n,dp)<<endl;
    for(int i=0;i<n;i++){
        cout<<dp[i]<<"  ";
    }
    cout<<endl;
    // cout<<topdown(n,dp)<<endl;
    cout<<bottomUp(n)<<endl;
    return 0;
}
