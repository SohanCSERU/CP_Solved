#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
vector<int >adj[MAX];
vector<int >ans;
bool visited[MAX];
int N;
 
void dfs(int v)
{
    visited[v]=true;
    for (int i = 0; i < adj[v].size(); ++i)
    {
        int ax = adj[v][i];
        if(visited[ ax ]==false )
        {
            dfs( ax );
        }
    }
    //cout<<v<<" ";
    ans.push_back(v);
}
 
void topological()
{
    memset(visited,false,sizeof(visited));
    ans.clear();
    for (int i = 1; i <=N; ++i){
        if( !visited[i] )
            dfs(i);
    }
    reverse(ans.begin(),ans.end());
}
 
int main()
{
    int ax=0,T,edg,x,y,Tmp=0;
    //freopen("input.txt","r",stdin);
 
    cin>>T;
    while(T--)
    {
 
    cin>>N>>edg;
 
    for(int i=0;i<edg ; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    topological();
 
    memset(visited,false,sizeof(visited));
    for (int i = 0; i <ans.size(); ++i)
    {
        if(!visited[ ans[i] ])
        {
            dfs( ans[i]);
            Tmp++;
        }
    }
 
    cout<<"Case "<< ++ax<<": "<<Tmp<<endl;
    Tmp=0;
   
    for (int i = 0; i <=N; ++i){
          adj[i].clear();  
      }
      ans.clear();
    }
 
    return 0;
}