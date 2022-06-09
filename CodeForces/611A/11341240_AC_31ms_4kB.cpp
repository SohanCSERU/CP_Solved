#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int d;
char s1[3],s2[6];
int main()
{
    while(~scanf("%d%s%s",&d,s1,s2))
    {
        if(s2[0]=='w')
        {
            if(d==5||d==6)printf("53\n");
            else printf("52\n");
        }
        else 
        {
            if(d<=29)printf("12\n");
            else if(d==30)printf("11\n");
            else if(d==31)printf("7\n");
        }
    }
    return 0;
}