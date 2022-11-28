#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int x;
    cout<<"Enter the element to insert:"<<endl;
    cin>>x;
    int p=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
          p=i;
          break;
        }
    }
    if(p==-1)
      arr[n]=x;
    else
    {
        for(int i=n-1;i>=p;i--)
        {
            arr[i+1]=arr[i];

        }
        arr[p]=x;
    }

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}