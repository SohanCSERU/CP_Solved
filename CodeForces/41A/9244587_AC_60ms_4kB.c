#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],b[105],temp[105];
    gets(a);
    gets(b);
    int i,m,j=0,x1,x2;
    x1=strlen(a); x2=strlen(b);
    for(i=x2-1; i>=0 ;i--,j++)
    {
        temp[j]=b[i];
    }
    int flag=1;
    for(m=0; m<x2 && m<x1;m++)
    {
        if(a[m]!=temp[m])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
