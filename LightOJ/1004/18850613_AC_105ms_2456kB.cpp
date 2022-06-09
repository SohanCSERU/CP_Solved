#include <bits/stdc++.h>
using namespace std;
#define MAX 10007
vector<int >adj[MAX];
int H=0;
 
void vectorClear(){
    for (int i = 0; i <=H ; ++i)
        adj[i].clear();
}
 
int main()
{
    int T,N,cnt=0,Tmp=0,ax,by;
    //freopen("input.txt","r",stdin);
    int K,M;
    cin>>T;
    while(T--)
    {
        cin>>N; H = N*2-1;
        for (int i = 0; i < N; ++i){
            for (int j = 0; j <=i ; ++j){
                cin>>ax;
                adj[i].push_back(ax);
            }
            adj[i].push_back(0);
        }
        for (int i = N; i <(N*2-1); i++){
            for (int j = 0; j < (N*2-1)-i ; ++j){
                cin>>ax;
                adj[i].push_back(ax);
            }
            adj[i].push_back(0);
        }
 
        for (int i = 1; i < N; ++i){
            for (int j = 0; j <(adj[i].size()-1) ; ++j){
                int ab = adj[i][j];
                if(j==0)
                {
                    adj[i][j] = ab+ adj[i-1][j];
                }
                else
                {
                    adj[i][j] = max((ab + adj[i-1][j-1]),(ab+adj[i-1][j]) );
                }
            }
        }
 
        for (int i = N; i <(N*2-1); i++){
            for (int j = 0; j < (N*2-1)-i ; ++j){
 
                int ab = adj[i][j];
                adj[i][j] = max((ab + adj[i-1][j+1]),(ab+adj[i-1][j]) );
            }
        }
        cout<<"Case "<< ++cnt<<": "<<adj[(N*2-2)][0]<<endl;
        vectorClear();
    }
 
    return 0;
}