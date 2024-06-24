#include<iostream>
using namespace std;

class Node {
    public :
     Node *next;
     int data;

     Node(int val){
        data = val;
        next = NULL;
     }

};

void insertAtHead (Node* &head , int val)
     {
        Node* n = new Node (val);
        n->next = head;
        head = n;

     }

void insertAtTail(Node* &head , int val)
     {
        Node *n = new Node (val);
        
        if(head == NULL){
            head = n;
            return;
        }

    Node *temp = head;
    while(temp->next != NULL ){
        temp=temp->next;
    } 
    temp->next = n;


}

void display(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"Null";
    
}

bool search(Node* &head, int key){
  Node* temp = head;
  while (temp!=NULL)
  {
    if(temp->data == key)
    {
        return true;
    }
    temp = temp->next;
  }

 return false;  

}


void deleteAtHead(Node* head){
    Node* todelet = head;
    head = head->next;
    delete todelet;
}

void Delete(Node* &head , int val){
 
 if(head == NULL){
    return;
 }
 if (head->next ==NULL)
 {
    deleteAtHead(head);
    return;
 }
 

  Node* temp = head;
  while (temp->next->data != val)
  {
   
   temp=temp->next;
  }
   Node* toDlete = temp->next;
  temp->next= temp->next->next; //  link from temp's next's next node [1]--[2]--[3]--[4] here  [1]--[2]---[4] 2's next is 3 , 3's next 4
  delete toDlete;

}


int main(){
 Node *head = NULL;
 insertAtHead(head , 10);
 insertAtTail(head,20);
 insertAtTail(head,30);
 insertAtTail(head,40);
 display(head);
 cout<<"\n"<<search(head, 10)<<endl;
 cout<<search(head, 100)<<endl;
 Delete(head,20);
 display(head);

return 0;
}