#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

    long n;
    long sum=0,d[3000009];
 long main() {
     long ans=0;
     while(scanf("%d",&n)==1){
         for(long i = sum = 0; i < n; i++){
             cin>>d[i];
             sum += d[i];
         }
         sort(d,d+n);
         ans = sum;

         for(long i = 0; i+1 < n; i++){
             ans += sum;
             sum -= d[i];
         }

        cout<<ans<<endl;

     }

     return 0;
}
