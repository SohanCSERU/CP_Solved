#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e,a,b;
    freopen("input.txt", "r", stdin);

    while(cin>>n>>e){
        if(n==0) break;
        vector<int>v[n];
        for(int i=0;i<e;i++){
            int first,second;
            cin>>first>>second;
            v[first].push_back(second);
            v[second].push_back(first);
        }
        int mark= 0;
        int visited[n];
        char level[n];
        memset(level,'n', sizeof(level));

        queue<int>q;
        q.push(0);
        level[0] = 'w';
        

        while(!q.empty() && !mark){
            int x = q.front();
            q.pop();
            int sz = v[x].size();
            for(int i=0;i<sz;i++){
                int y = v[x][i];
                if(level[y]=='n'){
                    q.push(y);
                    if(level[x]=='b') level[y]='w';
                    else level[y]='b';
                }else if(level[x]==level[y]){
                    mark=1;    
                    break;
                }
            }
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<v[i].size();j++){
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }      
 

        if (mark){
            cout<<"NOT BICOLORABLE."<<endl;
        }else{
            cout<<"BICOLORABLE."<<endl;
        }
        // for(int i=0;i<n;i++){
        //     cout<<level[i]<<" ";
        // } 
        // cout<<endl;
 
 
    }
    return 0;
}