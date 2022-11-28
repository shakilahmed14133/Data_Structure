#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};

node* head;

void insert_element(int item)
{
    node* temp = new node();
    temp->data=item;
    temp->link=NULL;

    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        node* t=head;
        while(t->link!=NULL)
        {
            t = t->link;
        }
        t->link=temp;
    }

}

void print_linkedList()
{
    node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}

void delete_element(int a)
{
    node* prev;
    node* ptr;
    prev = head;
    ptr = head;
    if(head->data==a)
    {
        head=head->link;
    }
    else
    {
        while(1)
        {
            ptr=ptr->link;
            if(ptr->data==a)
            {
                prev->link=ptr->link;
                break;
            }
            prev=prev->link;
            if(ptr==NULL)
              break;
        }
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
    delete_element(5);
    print_linkedList();

}