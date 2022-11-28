#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of vertex:\n";
    cin>>n;
    int arr[n+1][n+1];
    int m;
    cout<<"Enter the number of edges:\n";
    cin>>m;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u>n||v>n)
        cout<<"Invalid argument"<<endl;
        else
         {
            arr[u][v]=1;
            arr[v][u]=1;  // this line only for undirected graph
         }

    }

    cout<<"Here is the adjacency matrix:"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"Adjacent of node "<<i<<" is :"<<endl;
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j])
             cout<<j<<" ";

        }
        cout<<endl;
    }

    // power matrix...

    int powMatrix[n+1][n+1][n+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            powMatrix[1][i][j]=arr[i][j];
        }
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                int temp=0;
                for(int l=1;l<=n;l++)
                {
                    temp+=powMatrix[i-1][j][l]*arr[l][k];
                }
                powMatrix[i][j][k]=temp;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"power matrix of "<<i<<" is:"<<endl;
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                printf("%3d",powMatrix[i][j][k]);
            }
            cout<<endl;
        }
    }

    int Br[n+1][n+1];

    memset(Br,0,sizeof(Br));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                Br[j][k]+=powMatrix[i][j][k];
            }
        }
    }

    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(Br[i][j]==0)
             cnt++;
        }
    }

    if(cnt==0)
      cout<<"Strongly connected"<<endl;
    else
      cout<<"Not strongly connected"<<endl;
}
