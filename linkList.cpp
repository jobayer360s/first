#include<iostream>
using namespace std;

class  node{
  
  public:
   int data;
   node *next;

   node(int val){
    data = val;
    next = NULL;
   }

};

void insertAtHead(node* &head , int val){

    node* n = new node(val);
   n->next = head;
   head = n;

}
                                                                                                 
void insertAtTail(node* &head , int val){

   node* n = new node(val);

if(head == NULL){
    head = n;
    return;
}

node* temp = head;
while (temp->next != NULL)
{
    temp=temp->next;
}
temp->next= n;

}


void display(node *head){

   node *temp = head;
   while (temp != NULL)
   {
       cout<<temp->data<<"-";
       temp = temp->next;
   }
   cout<<"Null "<<endl;
   

}

bool search(node *head , int key){

node* temp = head;
while (temp != NULL)
{
  if(temp->data == key){
    return true;
  }
  temp = temp->next;
}


    return false;
}

void deleteAtHead(node* &head){
    node* todelet = head;
    head = head->next;
    delete todelet;
}

void Delete(node* &head , int val){
 
 if(head == NULL){
    return;
 }
 if (head->next ==NULL)
 {
    deleteAtHead(head);
    return;
 }
 

  node* temp = head;
  while (temp->next->data != val)
  {
   
   temp=temp->next;
  }
   node* toDlete = temp->next;
  temp->next= temp->next->next; //  link from temp's next's next node [1]--[2]--[3]--[4] here  [1]--[2]---[4] 2's next is 3 , 3's next 4
  delete toDlete;

}


int main(){


node *head = NULL;
insertAtTail(head, 5);
insertAtTail(head, 6);
insertAtTail(head, 7);
display(head);
insertAtHead(head , 10); 
display(head);
cout<<search(head, 10);
cout<<search(head, 455);

return 0;
}