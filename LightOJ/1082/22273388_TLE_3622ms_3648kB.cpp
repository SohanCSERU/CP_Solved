#include <bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx * 3];
int mn = 999999;

void init(int node ,int b,int e)
{
    if(b==e){
        tree[node] = arr[b];
        //cout<<node<<"->"<<arr[b]<<endl;
        return;
    }
    int left = node*2;
    int right = node*2 +1;
    int mid = (b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);

    tree[node] = min(tree[left],tree[right]);
    
    //cout<<node<<"->"<<tree[node]<<endl;
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        return mn;
    }
    if(b>=i && e<=j){
        //cout<<node<<"->"<<tree[node]<<endl;
        return tree[node];
    }


    int left = node*2;
    int right = node*2 +1;
    int mid = (b+e)/2;

    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);

    return min(p1,p2);
}

int main()
{
    int n,T,element,que;
    int cnt=0;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w+",stdout);
    cin>>T;
    while (T--)
    {
        cin>>element>>que;
        for (int i = 1; i <=element; i++)
        {
            cin>>arr[i];
        }

        init(1,1,element);
        cout<<"Case "<<++cnt<<":"<<endl;
        while (que--)
        {
            int a,b,tmp =0;
            cin>>a>>b;
            tmp = query(1,1,element,a,b);
            cout<<tmp<<endl;
        }
        
    }

    return 0;
}