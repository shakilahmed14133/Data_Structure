#include<bits/stdc++.h>
using namespace std;
struct node{
    int item;
    node* link;
};
node* head;
void insert_element(int data)
{
    node* newNode = new node();
    newNode->item=data;
    newNode->link=NULL;
    if(head==NULL)
     head=newNode;
    else
    {
        node *temp;
        temp=head;
        while (temp->link!=NULL)
        {
           temp = temp->link;
        }
        temp->link=newNode;
        
    }
}
void display()
{
    node* temp;
    temp= head;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->item<<" ";
        temp=temp->link;
    }
    
}
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert_element(a);

    }
    display();

}