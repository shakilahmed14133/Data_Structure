#include<bits/stdc++.h>
using namespace std;

//Node declaration ---
struct node{
    int data;
    node* next;

};
node* head;

// Insert code begin ---
void insertData(int item)
{
node* temp = new node();
temp->data = item;
temp->next = NULL;
if(head==NULL)
{
    head = temp;
}
else
{
  node* tmp = head;
  while(tmp->next!=NULL)
  tmp=tmp->next;

  tmp->next=temp;
}

}
void insertAtBegining(int item)
{
    node*temp = new node();
    
    temp->data = item;
    temp->next = head;
    head = temp;
}
void insertAtPosition(int pos,int item)
{
    node* temp = new node();
    temp ->data = item;
    node* tmp = head;
    pos = pos-2;
    if(pos<0)
    {
    temp->next = head;
    head = temp;
    }
    else
    while(pos--)
    {
        tmp=tmp->next;
    }
    temp ->next = tmp->next;
    tmp->next = temp;

}
void insertAfterAnElemnet(int item,int element)
{
    node* temp = new node();
    temp->data = item;
    node* tmp = head;
    while(tmp->data!=element)
    {
        tmp = tmp->next;
    }
    temp->next = tmp->next;
    tmp->next = temp;

}
// Insert code end ---

// Deletion code begin ---
void DeleteAtPosition(int pos)
{
    node* temp = head;
    node* prev = head;
    if(pos==1)
    {
        head = head->next;
    }
    else
    {
        pos = pos -1;
        while(pos--)
        {
            temp = temp->next;
            if(pos==0)
            break;
            prev = temp;
        }
        prev->next = temp->next;
    }

}

void DeleteElement(int element)
{
    node* temp = head;
    node* prev = head;
    if(head->data==element)
    {
        head = head->next;
    }
    else
    {
        while(1)
        {
            temp = temp->next;
            if(temp->data==element)
            {
                prev->next = temp->next;
                break;
            }
            prev = temp;
            if(temp->next==NULL)
            break;
        }

    }
}
// Deletion end ---

float average(int n)
{
    node* tmp = head;
    int sum=0;
    while(tmp!=NULL)
    {
        sum=sum+tmp->data;
        tmp=tmp->next;

    }
    return (float)sum/n;
}
void print()
{
    node* tmp=head;
    while(tmp!=NULL)
    {
       cout<<"Data = "<<tmp->data<<endl;
       tmp = tmp->next;
    }
}
int main()
{
   
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insertAtBegining(a);
    }
    insertAtPosition(4,10);
    insertAfterAnElemnet(6,10);

    DeleteAtPosition(6);
    DeleteElement(11);

    print();

    cout<<average(n)<<endl;

    
}