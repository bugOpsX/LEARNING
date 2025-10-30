#include<iostream>
using namespace std;
int AdjMatr[100][100];
bool visited[100];
int Nodes,Edges;
void DFS(int start)
{
    visited[start]=true;
    cout<<start<<"-->";
    for(int x=0;x<Nodes;x++)
    {
        if(AdjMatr[start][x]==1 && !visited[x])
            DFS(x);
    }
}
int main()
{
    
    int u,v;
    cout<<"\nEnter The Total no. of Nodes:";
    cin>>Nodes;
    cout<<"\nEnter the Total no. of Edges:";
    cin>>Edges;
    for(int j=0;j<Nodes;j++)
    {
        visited[j]=false;
        for(int k=0;k<Nodes;k++)
            AdjMatr[j][k]=0;
    }
    cout<<"\nEnter node pairs with Edges(indexing starts from 0):";
    for(int i=0;i<Edges;i++)
    {
        cout<<"\nEdge No."<<i+1<<":";
        cin>>u>>v;
        if(u>=Nodes || v>=Nodes)
        {
            cout<<"\nInvalid Input";
            i--;
            continue;
        }
        AdjMatr[u][v]=1;
        AdjMatr[v][u]=1;
    }
    int s;
    cout<<"\nEnter Starting Node:";
    cin>>s;
    cout<<"\nThe DFS Sequence:\n";
    DFS(s);
    cout<<"End";
    return 0;
}