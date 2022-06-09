#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;

    cin >> s1 >> s2 >> s3;
    int sum1=0,sum2=0,sum3=0,sum4=0;

    for(int i=0;i<s1.size();i++){
        if(isupper(s1[i])){
            int x = s1[i] - 'A' +1;
            sum1 += x;
        }
        if(islower(s1[i])){
            int x = s1[i] - 'a' +1;
            sum1 += x;
        }
    }

    //cout << sum1 <<endl;
     for(int i=0;i<s2.size();i++){
        if(isupper(s2[i])){
            int x = s2[i] - 'A' + 1;
            sum2 += x;
        }
        if(islower(s2[i])){
            int x = s2[i] - 'a' + 1;
            sum2 += x;
        }
    }
    //cout << sum2 <<endl;

    for(int i=0;i<s3.size();i++){
        if(isupper(s3[i])){
            int x = s3[i] - 'A' + 1;
            sum3 += x;
        }
        if(islower(s3[i])){
            int x = s3[i] - 'a' + 1;
            sum3 += x;
        }
    }

    int n;
    cin >> n;

    while(n--){
        cin >> s4;
        int cnt=0;
        int sum4=0;
        int cnt1 = 1,cnt2=1,cnt3=1;

        for(int i=0;i<s4.size();i++){
        if(isupper(s4[i])){
            int x = s4[i] - 'A' + 1;
            sum4 += x;
        }
        if(islower(s4[i])){
            int x = s4[i] - 'a' + 1;
            sum4 += x;
        }
        //cout << sum4 << endl;
//        if(sum4==sum1 || sum4==sum2 || sum4==sum3){
//            //cout << sum4 <<endl;
//            sum4=0;
//            cnt++;
//        }
//
        if(cnt1==1 && sum4==sum1){
            sum4 = 0;
            cnt ++;
            cnt1=0;
        }
        if(cnt2 == 1 && sum4 == sum2){
            sum4 = 0;
            cnt++;
            cnt2 = 0;
        }
        if(cnt3 == 1 && sum4 == sum3){
            sum4 = 0;
            cnt++;
            cnt3=0;
        }
    }

    if(cnt==3){
        cout << "ACC" <<endl;
        cnt=0;
    }
    else{
        cout << "WA" <<endl;
        cnt=0;
    }
    }

    return 0;
}
