#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,Temp=0,Line;
    double cnt=0;
    char ab[1003];//input[1005];
    string input;
    int hold[1003];
    //freopen("input.txt","r",stdin);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&Line);
        for (int i = 0; i < Line; ++i){
            cin>>ab[i]>>hold[i];
            //scanf("%c %d",&ab[i],&hold[i]);
        }

        cin>>N;
        cin.ignore();
        for(int k=0;k<N;k++){
            getline(cin,input);
            //puts(input);

            for(int i=0;i<input.size();i++){
                for(int a=0;a<Line;a++){
                    if(input[i]==ab[a]){
                        cnt+=hold[a];
                    }
                }
            }

        }
        printf("%.2lf$\n",cnt/100.0);

    }

	return 0;
}
