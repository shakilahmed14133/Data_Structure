#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of vertex:"<<endl;
    cin>>n;
    vector<int> adjList[n+1];

    int e;
    cout<<"Enter the number of edges"<<endl;
    cin>>e;
    for(int i=1;i<=e;i++)
    {
      int u,v;
      cin>>u>>v;
      adjList[u].push_back(v);
      adjList[v].push_back(u);
    }
     for(int i = 1; i <= n; i++) {
            cout << i << "-->";
           for(int j=0;j<adjList[i].size();j++)
           {

            cout<<adjList[i][j]<<" ";


           }
            cout << endl;
        }
}