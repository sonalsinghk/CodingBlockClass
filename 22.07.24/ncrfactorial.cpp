#include<iostream>
using namespace std;
int fact(int n){
   int ans = 1;
   for(int i=1;i<=n;i++){
    ans*=i;
   }
   return ans;
}
int ncr(int n, int r){
    int nfac = fact(n);
    int rfac = fact(r);
    int nrfac = fact(n-r);
    int ans2 = nfac/(rfac*nrfac);
    return ans2;
}
int main(){
    int n,r;
    cout<<"Factorial of number:"<<ncr(5,2);
    return 0;
}