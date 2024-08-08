#include<iostream>
#include<string.h>
using namespace std;
void combine(char str1[], char str2[]){
    int lena = strlen(str1);
    int lenb = strlen(str2);
     int i = lena, j=0;
     while(j<=lenb){
        str1[i]= str2[j];
        i++;
        j++;
     }
}
int main(){

    char a[100] = "Hello";
    char b[100] = "World";
    // combine(a,b);
    strcat(a,b);
    cout<<a<<endl;
    return 0;
}
