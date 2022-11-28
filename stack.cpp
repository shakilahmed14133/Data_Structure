#include<bits/stdc++.h>
using namespace std;
class stack1{
    public:
      int max = 100;
      int top = -1;
      int arr[100];

    bool isFull()
    {
      return (max==top+1);
    }
    bool isEmpty()
    {
        return (top==-1);
    }
    void push_element(int a)
    {
        if(isFull())
        cout<<"stack overflow\n";
        else{
        top++;
        arr[top]=a;}
    }
    int pop_element()
    {
        if(isEmpty())
        cout<<"stack underflow\n";
        else{
        int a;
        a=arr[top];
        top--;
        return a;}
    }
    void display()
    {
        cout<<"All elements are:"<<endl;
        for(int i=0;i<=top;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    int getSize()
    {
        return top+1;
    }
};
int main()
{
    stack1 s1;
    s1.push_element(5);
    s1.display();
    cout<<s1.getSize()<<endl;
    cout<<s1.pop_element()<<endl;
    s1.pop_element();

}