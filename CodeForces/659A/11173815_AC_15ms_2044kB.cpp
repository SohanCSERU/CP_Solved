#include <bits/stdc++.h>  
using namespace std;  
  
int main(){  
    int n,a,b;  
    while(~scanf("%d%d%d",&n,&a,&b)){  
        int ans = (a+b)%n;  
        if(ans < 0)  
            ans += n;  
        if(ans == 0)  
            ans = n;  
        printf("%d\n",ans);  
    }  
    return 0;  
} 