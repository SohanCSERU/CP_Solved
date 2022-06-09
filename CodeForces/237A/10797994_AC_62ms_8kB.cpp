#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, h, m, a, b, cnt=1, ma=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d%d", &h, &m);
        if(i==0) a=h, b=m;
        else {
            if(a==h && b==m) cnt++;
            else {
                a=h, b=m;
                if(cnt>ma)
				 ma=cnt;
                cnt=1;
            }
            if(cnt>ma) ma=cnt;
        }
    }
    printf("%d", ma);
    return 0;
}
