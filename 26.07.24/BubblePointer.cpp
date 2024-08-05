One way:
#include<iostream>
using namespace std;
void bubbleSort(int *a, int n){
     
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
     }
}
void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i);
    }
}
int main(){
    int a[] = {1,4,3,6,5};
    int n = sizeof(a)/sizeof(int);

    bubbleSort(a,n);
    printArray(a,n);

    return 0;
}

Second Way:

#include<iostream>
using namespace std;
void bubbleSort(int *a, int n){
     
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(a+j)>*(a+j+1)){
                swap(*(a+j),*(a+j+1));
            }
        }
     }
}
void printArray(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i);
    }
}
int main(){
    int a[] = {1,4,3,6,5};
    int n = sizeof(a)/sizeof(int);

    bubbleSort(a,n);
    printArray(a,n);

    return 0;
}
