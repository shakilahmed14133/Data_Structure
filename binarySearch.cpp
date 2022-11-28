#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid = l+(r-1)/2;

        if(arr[mid]==x)
         return mid;
        else if(arr[mid]>x)
          return binary_search(arr,l, mid-1, x);
        else
           return binary_search(arr, mid+1,r,x);
        
    }

    return -1;
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
      cin>>arr[i];

      if(binary_search(arr,0,9,5)==-1)
       cout<<"search is unsucessful"<<endl;
      else
        cout<<"search is sucessful, position is: "<<binary_search(arr,0,9,5)<<endl;

}