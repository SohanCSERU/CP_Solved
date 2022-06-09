#include<stdio.h>
int main()
{
    int a,b,T;
    char X,Y;
    scanf("%d",&T);
    while(1){
    scanf("%c",&X);

    if(X=='B' || X=='b')
       printf("BattleShip\n");
       else if(X=='C'|| X=='c')
           printf("Cruiser\n");
            else if(X=='D'|| X=='d')
              printf("Destroyer\n");
                else if(X=='F'|| X=='f')
                   printf("Frigate\n");
                   else continue;
    }

    return 0;
}
