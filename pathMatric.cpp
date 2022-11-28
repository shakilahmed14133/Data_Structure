#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    int adj[n+1][n+1];
    int e;
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;
    memset(adj,0,sizeof(adj));

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        
        if(u>n||v>n)
        cout<<"Invalid Input"<<endl;
        else
        {
            adj[u][v]=1;
           // adj[v][u]=1;
        }

    }
    cout<<"Adjacent matrix is:"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%3d",adj[i][j]);
        }
        cout<<endl;
    }

    int powMtx[n+1][n+1][n+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            powMtx[1][i][j]=adj[i][j];
        }
    }
    int temp;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                 temp=0;

                for(int l=1;l<=n;l++)
                {
                   temp+=powMtx[i-1][j][l]*adj[l][k];
                }
                powMtx[i][j][k]=temp;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"power matrix of "<<i<<endl;
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                printf("%3d",powMtx[i][j][k]);
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
                Br[j][k]+=powMtx[i][j][k];
            }
        }
    }

    cout<<"Br is :"<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%3d",Br[i][j]);
        }
        cout<<endl;
    }

    int path[n+1][n+1];
    memset(path,0,sizeof(path));
    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(Br[i][j]==0)
            {
               cnt++;
               path[i][j]=0;
            }
            else
            path[i][j]=1;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(cnt==0)
     cout<<"The graph is strongly connected"<<endl;
     else
     cout<<"The graph is not strongly connected"<<endl;
    

    
}