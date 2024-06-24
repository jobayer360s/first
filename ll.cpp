#include<iostream>
using namespace std;

class Node{
  public:  
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtHead(Node* &head , int val){

    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head , int val)
{
    Node* n = new Node(val);

   if (head == NULL)
   {
   head = n;
   return;
   }
   
   Node* temp = head;
   while (temp->next != NULL)
   {
     temp = temp->next;
   }
   temp->next = n;
}


void display(Node* head){
    
    Node* temp = head;
while (temp !=NULL)
{
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<"Null";


}

bool search(Node* head, int key){
    Node* temp = head;
    while (temp != NULL)
    {
       if(temp->data == key){
        return true;
       }
       temp=temp->next;
    }
    return false;
}

int main(){
 
 Node *head = NULL;
 insertAtHead(head ,10);
 insertAtTail(head,20);
 insertAtTail(head,30);
 insertAtTail(head,40);
 insertAtTail(head,50);
 display(head);
 cout<<endl;
 cout<<search(head,20)<<endl;
 cout<<search(head,80)<<endl;


return 0;
}