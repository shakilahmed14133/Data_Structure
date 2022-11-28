#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int fibonacci(int f)
{
    if(f==1)
     return 0;
    else if(f==2)
     return 1;
    else
     return (fibonacci(f-1)+fibonacci(f-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<"factorial:"<<fact(n)<<endl;

    cout<<"fibonacci :"<<fibonacci(n)<<endl;

}