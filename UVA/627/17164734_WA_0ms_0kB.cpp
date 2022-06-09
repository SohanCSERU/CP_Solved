#include <bits/stdc++.h>
using namespace std;
#define aaa 10000

vector <int> v[aaa] ;
int parent[aaa],H=0;
bool visited[aaa];

    void bfs(int s) {
    	memset(visited,0,sizeof(visited));
        memset(parent,0,sizeof(parent));

        queue <int> q;
        q.push(s);
        visited[ s ] = true;
        parent[s] = -1;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                int ap= v[p][i];
                if(visited[ ap ] == false)
                {
                    parent[ap] = p;
                    q.push(ap);
                    visited[ap] = true;
                }
            }
        }
    }

void Path_print(int start,int en)
{
    if (!visited[en])
    {
        cout << "connection impossible"<<endl;
    }
    else
    {
        vector<int> path;
        for (int v = en; v != -1; v = parent[v])
            path.push_back(v);
        reverse(path.begin(), path.end());

        for(int i=0;i<path.size();i++)
            cout<<path[i]<<" ";
        cout<<endl;
    path.clear();
    }
}
int main()
{
    int T,Nod,qua,Edg,x,y,N,M,cnt=0,Tem=0;
    freopen("input.txt","r",stdin);
    char no;

    while(scanf("%d",&Edg)!=EOF)
    {
        string abs;
        int sum=0,ax;
        for (int k = 0; k <Edg; ++k)
	    {
	    	cin>>x;
	    	//scanf("%c",&no);
            cin>>abs;
            for(int i=1;i<abs.size();i++)
            {
                if(abs[i]==','){
                  v[x].push_back(sum);
                    sum=0;
                    continue;
                }
                else if(i==(abs.size()-1))
                {
                   ax = abs[i] - '0';
                   sum = sum*10 +ax;
                    v[x].push_back(sum);
                    sum=0;
                    continue;
                }
                ax = abs[i] - '0';
                sum = sum*10 +ax;

            }
	    }
        cout<<"-----"<<endl;
        int U,V;
	    cin>>qua;
	    for(int b=0;b<qua;b++)
        {
            cin>>U>>V;
            bfs(U);
            Path_print(U,V);
        }

        for(int i=0;i<=Edg;i++)
            v[i].clear();
	}

	return 0;
}
