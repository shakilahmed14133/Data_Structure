#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
             swap(arr[j],arr[j+1]);

        }
    }

    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";

     cout<<endl;
}
int main()
{
  int n;
  cout<<"Enter the size of array:"<<endl;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"sorting array is:"<<endl;

    sorting(arr,n);

}