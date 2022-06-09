Magic FormulaC++

#include<stdio.h>

int main()
{

    long long f,i,k,a ,b ,c ,d ,L;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
        {
            if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
            k=0;
            for(i=0;i<=L;i++)
            {
                f=(i*i*a)+(i*b)+c;
                if(f%d==0)
                k++;
            }
            printf("%lld\n",k);
        }


    return 0;
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
#include<stdio.h>
 
int main()
{
 
    long long f,i,k,a ,b ,c ,d ,L;
 
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
        {
            if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
            k=0;
            for(i=0;i<=L;i++)
            {
                f=(i*i*a)+(i*b)+c;
                if(f%d==0)
                k++;
            }
            printf("%lld\n",k);
        }
 
 
    return 0;
}