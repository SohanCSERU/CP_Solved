#include <bits/stdc++.h>
#include <string.h>

int main()
{
    char abs[1000015];
    int cnt=1,N,start,en,i,check,Temp=0;
    while(scanf("%s",abs)==1)
    {
        if(strcmp(abs,"\n")==0)
        break;
        scanf("%d",&N);
        printf("Case %d:\n",cnt++);
        while(N--)
        {
            scanf("%d%d",&start,&en);
            if(start>en)
            {
                Temp = start;
                start = en;
                en = Temp;
            }
            if(start==en)
            {
               printf("Yes\n");
               continue;
            }
            for(int i=start;i< en;i++)
            {

                if(abs[i]==abs[i+1])
                    check=1;
                else
                {
                  check=0;
                  break;
                }
            }
            if(check==1)
               printf("Yes\n");
            else
               printf("No\n");
        }
    }
    return 0;
}
