#include<iostream>
using namespace std;

class Node{
  public : 
   int data;
    Node *left , *right;

     Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

Node* insertBST(Node *root, int val){

    if(root == NULL){
        return new Node(val);
    }
if(val< root->data){
    root->left = insertBST(root->left, val);
}

else{

 root->right = insertBST(root->right, val);
}
return root;
}


void inorder(Node *root){
   if(root == NULL){
    return;
   }

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);

}


void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}


void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}




Node* searchInBST(Node* root, int key){
    if( root == NULL){
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
   
    if(key < root->data){
        return searchInBST(root->left, key);
    }


    return searchInBST(root->right, key);
}


int main(){
  Node *root = NULL;
  root = insertBST(root , 5);
  insertBST(root , 1);
  insertBST(root , 2);
  insertBST(root , 3);
  insertBST(root , 4);
  insertBST(root , 7);


  cout<<"Inorder traversal"<<endl;
  inorder(root);
  cout<<"\nPreorder traversal"<<endl;
  preOrder(root);
  cout<<"\nPostorder traversal"<<endl;
  postOrder(root);
  cout<<endl;

  if (searchInBST(root, 5) == NULL)
{
    cout<<"key does not exist"<<endl;
}
else{
cout<<"key exist"<<endl;
}

 if (searchInBST(root, 15) == NULL)
{
    cout<<"key does not exist"<<endl;
}
else{
cout<<"key exist"<<endl;
}

return 0;
}