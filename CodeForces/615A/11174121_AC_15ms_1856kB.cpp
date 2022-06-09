#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int n,m,i,j,k,l,a[110];  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        memset(a,0,sizeof(a));  
        for(i=0;i<n;i++)  
        {  
            scanf("%d",&k);  
            for(j=0;j<k;j++)  
            {  
                scanf("%d",&l);  
                a[l]++;  
            }  
        }  
        int flag=0;  
        for(i=1;i<=m;i++)  
        {  
            if(a[i]==0)  
            {  
                flag=1;  
                break;  
            }  
        }  
        if(flag==0)  
        printf("YES\n");  
        else  
        printf("NO\n");   
    }  
    return 0;  
}  


