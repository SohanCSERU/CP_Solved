#include <bits/stdc++.h>
using namespace std;
vector<int >store;
bool check[3005];

int main()
{
    int T,Sz=0,abs=0,x,y,N,M;
   // freopen("input.txt","r",stdin);

    while(scanf("%d",&N)==1)
    {
        int cnt=0;
        memset(check,false,sizeof(check));

        for (int i = 0; i <N; ++i)
        {
            cin>>x;
            store.push_back(x);
        }

        for (int i = 0; i < (store.size()-1); ++i)
        {
            abs = store[i] - store[i+1];
            if(abs < 0) abs*=-1;
            check[abs]=true;
        }

        for (int i = 1; i <=(store.size()-1) ; ++i){
          if(check[i]==0){
            cnt=1;
            break;
          }
        }
        if(cnt) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;

        store.clear();
    }
    return 0;
}