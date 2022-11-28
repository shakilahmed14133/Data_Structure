#include<bits/stdc++.h>
using namespace std;
// Node declaration ---
struct node{
    int data;
    node* left;
    node* right;
};
node* head;

// Insertion code begin ---

void insertElement(int item)
{
  node* temp = new node();
  temp->left = NULL;
  temp->right = NULL;
  temp->data = item;
  int pos = 1;
  node* tmp = head;
  if(head==NULL)
  {
    head = temp;
    cout<<"Added to the position : 1"<<endl;
  }
  else
  {
    pos=1;
    while(1){
    
     if(item==tmp->data)
     {
     cout<<"already exist: "<<pos<<endl;
     break;
     }
     
    else if(item>tmp->data)
    {
        if(tmp->right!=NULL)
        {
           
          
          tmp = tmp->right;
           pos = pos*2 + 1;
          
        }
        else{
        tmp->right = temp;
        cout<<"Added to the position: "<<pos*2+1<<endl;
        break;
        }


        
    }
    else
    {
        if(tmp->left!=NULL){
            pos = pos*2;
        tmp = tmp->left;
        }
        else
        {
            tmp->left = temp;
            cout<<"Added to the position: "<<pos*2<<endl;
            break;
        }
    }

    }
  }
}

//Insertion code end ---

//Traversal code begin ---

void preorderTraversal(node* newNode)
{
  
  if(newNode==NULL)
   return;

  cout<<newNode->data<<" ";
  preorderTraversal(newNode->left);
  preorderTraversal(newNode->right);

}

void inorderTraversal(node* newNode)
{
  if(newNode==NULL)
  return;

  inorderTraversal(newNode->left);
  cout<<newNode->data<<" ";
  inorderTraversal(newNode->right);
  
}

void postorderTraversal(node* newNode)
{
  if(newNode==NULL)
  return;

  postorderTraversal(newNode->left);
  postorderTraversal(newNode->right);

  cout<<newNode->data<<" ";
}
// Traversal code end ---
int main()
{
    int n,a;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        insertElement(a);
      
    }


    cout<<"preorder traversal:"<<endl;
    preorderTraversal(head);
    cout<<endl;

    cout<<"inorder traversal:"<<endl;
    inorderTraversal(head);
    cout<<endl;

    cout<<"postorder traversal:"<<endl;
    postorderTraversal(head);

}