#include<bits/stdc++.h>
using namespace std;
map <int, bool> visited;
map<int,list<int> >adj;

void addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(int v)
{
    visited[v]=true;

    cout<<v<<" ";

   list<int>::iterator i;
   for(i = adj[v].begin();i!=adj[v].end();i++)
      if(!visited[*i])
       DFS(*i);

}
int main()
{
    int e;
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
        
    }
    int v;
    cin>>v;
    DFS(v);

}