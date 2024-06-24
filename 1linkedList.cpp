#include<iostream>
using namespace std;

class Node{
  public:
   int data;
   Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }

};

void insert(Node* &head, int val){
    
    Node *n = new Node (val);

    if (head == NULL)
    {
     head = n;
     return;
    }

    Node* temp = head;
    while(temp->next != NULL){
       temp = temp->next;
    }
    temp->next = n;

    
}

void traversal(Node* &head){
  Node* temp = head;
  
  while (temp != NULL)
  {
   cout<<temp->data<<" ";
   temp = temp->next;
  }
  cout<<" Null"<<endl;

}

void search(Node* &head, int value){
    Node* temp = head ;
    while (temp != NULL)
    {
     if (temp->data == value)
     {
        cout<<"Found "<<endl;
        return;
     }
      temp = temp->next;
    }
     cout<<"Not Found "<<endl;
}

int main(){

Node* head = NULL;
insert(head, 10);
insert(head, 20);
insert(head, 30);
insert(head, 40);
traversal(head);
search(head, 20);
search(head, 50);

return 0;
}