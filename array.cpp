#include<bits/stdc++.h>
using namespace std;
int max_value(int a[],int n)
{
    int h=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        h=a[i];
    }
    return h;
}
int min_value(int a[],int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<m)
        m=a[i];
    }
    return m;
}
int sum_value(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
      sum=sum+a[i];


  return sum;
}
float avg_value(int a[],int n)
{
    float avg,sum=0;

    for(int i=0;i<n;i++)
      sum=sum+a[i];

    return (sum/n);
    
}
void sin_value(int a[],int n)
{
    for(int i=0;i<n;i++)
     cout<<"sin value of "<<a[i]<<": "<<sin(a[i])<<endl;
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
     cin>>arr[i];

    cout<<"maximum element is: "<<max_value(arr,10)<<endl;
    cout<<"minimum element is: "<<min_value(arr,10)<<endl;
    cout<<"Total value is: "<<sum_value(arr,10)<<endl;
    cout<<"Avg value is: "<<avg_value(arr,10)<<endl;
    sin_value(arr,10);

}