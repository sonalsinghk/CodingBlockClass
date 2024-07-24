#include<iostream>
using namespace std;
int main(){
    
    int a[5]={2,3,5,8,11};
    int n = sizeof(a)/sizeof(int);

    int largest, second_largest;
    largest = second_largest = a[0];

    for(int i=1;i<n;i++){

        if(a[i]>largest){
            second_largest=largest;
            largest = a[i];
        }
        else if(a[i]>second_largest){
            second_largest=a[i];
        }
    }
    cout<<"Second largest:"<<second_largest;
    return 0;
}