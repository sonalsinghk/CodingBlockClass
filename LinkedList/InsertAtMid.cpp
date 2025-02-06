#include<iostream>
using namespace std;
class node{
      public:
      int data;
      node* next;       //self refrential class
      node(int d){
          data = d;
           next = NULL;
      }
};
int lengthLL(node* head){

    int cnt =0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtEnd(node* &head, node* &tail, int d){
     
     //check if its empty
     if(head == NULL){
        node* n = new node(d);
        head = tail = n;
     }
     else{
        node* n = new node(d);
        tail->next = n;         //|1|n|-->|2|&|
        tail = n;               //2nd node ke tail ko n se update
     }
}
void insertAtFront(node* &head, node* &tail, int d){

    if(head == NULL){

        node* n = new node(d);
        head = tail = n;
    }
    else{
        node* n = new node(d);
        n->next = head;
        head = n;
    }
}
void insertAtMid(node* &head, node* &tail, int pos, int d){

    if(pos >= lengthLL(head)){
        insertAtEnd(head, tail, d);
    }
    else if(pos == 0){
        insertAtFront(head, tail, d);
    }
    else{
        node* temp = head;
        for(int i=1;i<(pos-1);i++){
            temp = temp->next;        //peeche wali node ka address store hogya temp mein
        }
        node* n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void printLL(node* head){

    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    
    node* head = NULL, *tail = NULL;
    insertAtFront(head,tail,1);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);
    printLL(head);
    cout<<"Length ll:"<<lengthLL(head)<<endl;
    insertAtMid(head, tail, 3, 17);
    printLL(head);
    cout<<"Update ll:"<<lengthLL(head)<<endl;
    return 0;
}
