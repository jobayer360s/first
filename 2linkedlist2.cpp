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

void insertAtLast(Node* &head, int val){
    
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


void DisplayList(Node* &head){
  Node* temp = head;
  
  while (temp != NULL)
  {
   cout<<temp->data<<" ";
   temp = temp->next;
  }
  cout<<" Null"<<endl;

}



void insertAtMiddle(Node* &head, int val){
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    n->next = slow->next;
    slow->next = n;
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
insertAtLast(head, 10);
insertAtLast(head, 20);
insertAtLast(head, 30);
insertAtLast(head, 40);
DisplayList(head);
insertAtMiddle(head,25);
DisplayList(head);
search(head, 20);
search(head, 50);

return 0;
}