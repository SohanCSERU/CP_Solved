#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    //freopen("input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    int T,cnt=0;
	double a,b,c,d,N;
    double S=0,abc=0,tt=0,aa=0;
    cin>>T;
    while(T--)
    {
       cin>>a>>b>>c>>d;
     if(a<c) swap(a,c);
    
    S=((a-c)+b+d)/2;
    abc=sqrt(S*(S-(a-c))*(S-b)*(S-d));  //abc is the area of the Triangle 
    tt= 2*abc/(a-c);   //Height
    /*The area of Trapizium is as follow.*/
    aa=tt*c + abc;
    
    std::cout<< std::fixed;
    std::cout<< std::setprecision(10);

    cout<<"Case "<< ++cnt <<": "<<aa<<endl;
    //cout<<"The height: "<<tt<<" "<<"Area Of Trapizium: "<<aa<<endl;
    }

	return 0;
}