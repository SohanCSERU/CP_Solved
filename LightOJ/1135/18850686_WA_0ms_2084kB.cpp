    #include <bits/stdc++.h>
    using namespace std;
    bool marked[105];
    #define Max 104
    int prime[105],top=0;
     
    void sieve(int n)
    {
        marked[1]=true;
        for (int i = 4; i <=n; i+=2)
        {
            marked[i]=true;
        }
     
        for (int i = 3; i*i <= n ; i+=2)
        {
            if(marked[i]==false)
            {
                for (int k = i*i; k <=n ; k+=i+i)
                {
                    marked[k]=true;
                }
            }
        }
        for (int i = 1; i <=Max; i++ )
        {
            if(marked[i]==0)
            {
                prime[top]=i;
                top++;
            }
     
        }
    }
     
     
    int main()
    {
        int N,M,R,T,cnt=0,tty=0,Temp=0,tmp=0,Buck[100];
        cin>>T;
        while(T--)
        {
            sieve(Max);
           
            cin>>N;
     
            for (int i = 0; prime[i] <= N; i++)
            {
                Temp=0,tty=prime[i];
     
                for (int k = prime[i]; k <=N ; k*=tty)
                {
                    Temp+= N/k;
                }
                Buck[tmp++]=Temp;
            }
     
            printf("Case %d: %d =",++cnt,N);
     
            for (int i = 0; i <(tmp-1); ++i)
            {
                printf(" %d (%d) *",prime[i],Buck[i]);
            }
            printf(" %d (%d)\n",prime[tmp-1],Buck[tmp-1]);
     
            //cout<<"Case "<<++cnt<<": "<<T<<endl;
            top=0,tmp=0;
        }
        return 0;
    }
