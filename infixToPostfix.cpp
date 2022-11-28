#include<bits/stdc++.h>
using namespace std;

char stk[100];
int top = -1;
int max = 100;
void push_element(char a)
{
    top++;
    stk[top]=a;
}
void pop_element()
{
    top--;
}
char top_element()
{
    return stk[top];
}

int priority(char c)
{
    if(c=='+'||c=='-')
    return 1;
    else if(c=='*'||c=='/')
    return 2;
    else if(c=='^')
    return 3;
    else if(c=='(')
    return -1;

}

string infixToPostfix(string s)
{
    string p;
   
    push_element('(');
    s=s+')';

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9'||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        p=p+s[i];
        else if(s[i]=='(')
        push_element('(');
        else if(s[i]!=')')
        {
           while(priority(top_element())>=priority(s[i])&&top_element()!='('&&top!=-1)
           {
            p=p+top_element();
            pop_element();
           }
           push_element(s[i]);


        }
        else if(s[i]==')')
        {
            while(top_element()!='('&&top!=-1)
            {
                p=p+top_element();
                pop_element();
            }
            pop_element();
            
        }

    }

    return p;

}

int postfixToEvaluation(string s)
{
    int t=-1;
    float arr[100];
    float a;
    float b;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            t++;
            arr[t]=s[i]-48;
        }
        else if(s[i]=='+')
        {
            a=arr[t];
            t--;
            b=arr[t];
            arr[t]=(b+a);

        }
        else if(s[i]=='-')
        {
            a=arr[t];
            t--;
            b=arr[t];
            arr[t]=(b-a);
        }
        else if(s[i]=='*')
        {
            a=arr[t];
            t--;
            b=arr[t];
            arr[t]=(b*a);
        }
        else if(s[i]=='/')
        {
            a=arr[t];
            t--;
            b=arr[t];
            arr[t]=(b/a);
        }
        else if(s[i]=='^')
        {
            a=arr[t];
            t--;
            b=arr[t];
            arr[t]=pow(b,a);
        }
    }

    return arr[0];
}

int main()
{
    string s;
    cin>>s;
    string p = infixToPostfix(s);
    cout<<"postfix Expression is:"<<endl;
    cout<<p<<endl;
    cout<<"Evaluation of postfix expression is:"<<endl;
    cout<<postfixToEvaluation(p)<<endl;
}