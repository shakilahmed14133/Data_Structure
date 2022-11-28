#include<bits/stdc++.h>
using namespace std;
int postfittoEvaluation(string s)
{
    int t=-1;
    float arr[100];
    float a,b;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            t++;
            arr[t]=s[i]-48;
        }
        else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            cout<<"Please enter the value of the variable "<<s[i]<<" :"<<endl;
             cin>>a;
             t++;
             arr[t]=a;
        }
        else
        {
            if(s[i]=='+')
            {
                b=arr[t];
                t--;
                a=arr[t];
                arr[t]=a+b;
            }
            else if(s[i]=='-')
            {
                b=arr[t];
                t--;
                a=arr[t];
                arr[t]=a-b;
            }
            else if(s[i]=='*')
            {
                b=arr[t];
                t--;
                a=arr[t];
                arr[t]=a*b;
            }
            else if(s[i]=='/')
            {
                b=arr[t];
                t--;
                a=arr[t];
                arr[t]=a/b;
            }
            else if(s[i]='^')
            {
                b=arr[t];
                t--;
                a=arr[t];
                arr[t]=pow(a,b);
            }
              
        }
    }

    return arr[0];
}
int main()
{
    string s;
    cout<<"Enter the postfix expression to evaluate"<<endl;
    cin>>s;

   cout<<postfittoEvaluation(s)<<endl;

}