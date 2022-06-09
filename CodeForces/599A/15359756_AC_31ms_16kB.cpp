#include<iostream>
using namespace std;  
int main(){  
    int d1, d2, d3, ans;  
    cin>>d1>>d2>>d3;  
        int min, max;  
        min = d1 < d2 ? d1 : d2;  
        max = d1+d2-min;  
        if(d1+d2 <= d3)  ans = 2*(d1+d2);  
        else{  
            if(max < min+d3) ans = d3 + d1 + d2;  
            else ans = 2*(min+d3);  
        }  
       // printf("%d\n", ans);
	   cout<<ans<<endl;  
    return 0;  
}  