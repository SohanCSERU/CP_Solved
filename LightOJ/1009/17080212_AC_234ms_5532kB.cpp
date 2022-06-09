#include <bits/stdc++.h>
using namespace std;
#define MAX 20005

vector <int> v[MAX] ;
int level[MAX],H=0,mx,odd=0,even=0;
bool visited[MAX];
vector<int > traverse;

    void bfs(int s)
    {
        odd=0,even=0;
        memset(level,0,sizeof(level));


        queue<int >q;
        q.push(s);
        level[ s ] = 1; odd++;
        visited[ s ] = true;
       //cout<<"S is visited: "<<visited[s]<<endl;
        while(!q.empty() )
        {
            int p = q.front();
            q.pop();
           //cout<<"queue Ele: "<<p<<endl;

            for(int i = 0;i < v[ p ].size() ; i++)
            {
                int x = v[p][i];
                if(visited[ x ] == false)
                {
                    q.push(x);
                    visited[ x ] = true;
                    level[ x ] = level[ p ]+1;
                    
                   // cout<<"visited : "<<x<<" "<<visited[x]<<endl;
                    if((level[ x ])%2 == 1)
                    {
                        //cout<<"level of :"<<x<<" is ODD and Call via.."<<p<<endl;
                        odd++;
                    }
                    else if(level[x]%2==0)
                    {
                        //cout<<"level of :"<<x<<" is even call via "<<p<<endl;
                        even++;
                    }
                }
            }
        }
    //    cout<<"ODD AND EVEN: "<<odd<<" "<<even<<endl;
    }

void Vclear()
{
    for (int i = 0; i <=MAX; ++i)
    {
        v[i].clear();
     }
}

int main()
{
    int T,abs=0,qua,Edg,x,y,N,M,cnt=0;
    //freopen("input.txt","r",stdin);

    scanf("%d",&T);
    while(T--)
    {
        memset(visited,false,sizeof(visited));

        int Temp=0;
        mx=0;
        scanf("%d",&Edg);
        for (int i = 0; i <Edg; ++i)
        {
            //cin>>x>>y;
            scanf("%d%d",&x,&y);

            mx = max(mx,max(x,y));
            traverse.push_back(x);
            traverse.push_back(y);

            v[x].push_back(y);
            v[y].push_back(x);
        }
        //cout<<"MAX: "<<mx<<endl;
        for (int k = 0; k <traverse.size(); k++)
        {
            int ax = traverse[k];
            if(visited[ax]==false)
            {
                bfs(ax);
                Temp += max(odd,even);
            }
        }
        //cout<<"Case "<< ++cnt <<": "<<Temp<<endl;
        
        printf("Case %d: %d\n",++cnt,Temp);
        Vclear();
        traverse.clear();
    }

    return 0;
}