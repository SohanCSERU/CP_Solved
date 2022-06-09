#include <bits/stdc++.h>
using namespace std;


int monthCheck(string abs)
{
    if(abs=="January")
    	return 1;
    else if(abs=="February")
    	return 2;
    else return 3;
}

int isLeap(int Time1)
{
    int LeapSign=0;
    
    if(Time1%400==0)
    {
        LeapSign=1;
    }
    else if(Time1%100 !=0 && Time1%4==0)
    {
        LeapSign=1;
    }
    return LeapSign;  
}

int main()
{
    int T,M,N,O,Time1,check=0,Time2=2050,cnt=0,Temp=0,sum=0;
    int Date1,Date2;
    char cha;
    string month1,month2;
    cin>>T;
    while(T--)
    {   

        cin>>month1>>Date1>>cha>>Time1;
        cin>>month2>>Date2>>cha>>Time2;

    if(isLeap(Time1))
    {
	    if(monthCheck(month1)==1 || monthCheck(month1)==2)
	    	check = 1;
	    else 
	       check=0;
    }
    int abs=0,Inside=0;
    if(isLeap(Time2))
    {
	    if(monthCheck(month2)==1 || (monthCheck(month2)==2 && Date2<29))
	    	abs = 0;
	    else 
        abs=1;
      Inside=1;
    }

     //cout<<"Is Leap Year Time1: "<<check<<" Is Leap Year: "<<abs<<endl;

    N=Time2/4- Time1/4 + check;      
    M=Time2/100-Time1/100;
    O=Time2/400-Time1/400;
    
    sum=N-M+O;

    if(Inside==1 && abs==0)
    {
       sum -=1;
    }
  
   	cout<<"Case "<< ++cnt <<": "<<sum<<endl;

    //cout<<"The 4 Division is: "<<N<<" \n100 Division is : "<<M<<" \n400 Division Is: "<<O<<endl;
    sum=0,check=0,abs=0;
    }


	return 0;
}