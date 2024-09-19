#include<iostream>
using namespace std;
class Car{
    public:
    char name[100];
    int seats;
    int price;
    void print(){
        cout<<"Name:"<<name<<endl;
        cout<<"Seats:"<<seats<<endl;
         cout<<"Price:"<<price<<endl;
    }
};
int main(){
    Car A;
    strcpy(A.name,"AUDI");
    A.price = 200;
    A.seats = 4;
    A.print();

    Car B;
    strcpy(B.name,"BMW");
    B.price = 250;
    B.seats = 6;
    B.print();
    return 0;
}
