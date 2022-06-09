#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int stac[100];
int top = -1 ;

void push(int a)
{
    top++;
    stac[top] = a ;
}

int pop()
{
    return stac[top--];
}

int main()
{
    int i,a,b,j,c,p,q,r;
    char str[100] ;
    cin >>a;
   cin >>p>>q;
    for( i = 0 ; i < strlen(str) ; i++ )
    {
        if(isdigit(str[i]))
        {
            int x = str[i] - '0';
            push(x);
        }

        else
        {
            a = pop();
            b = pop();

            if(str[i] == '+')
                c = b + a;
            else if(str[i] == '-')
                c = b -a ;
            else if(str[i] == '*')
                c = b * a ;
            else if(str[i] == '/')
                c = b / a ;
            else
            {
                c = 1 ;
                for(j = 1 ; j <= a ; j++)
                {
                    c = c * b;
                }
            }

            push(c);

        }
    }

    cout << stac[0] ;
return 0;
}
