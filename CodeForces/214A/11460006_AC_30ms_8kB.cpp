#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,T,cnt=0,a,b;
    scanf("%d%d",&N,&M);

    for(int a=0;a<=N;a++)
       for(int b=0;b<=M;b++){
        if((a+b*b==N) && a*a+b==M){
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
