#include <stdio.h>
#include <string.h>

int main()
{
    char team[101];
    int i;
    int a=0, b=0;
    int length;
    gets(team);
    length = strlen(team);
    for(i=0; i<length; i++){
        if(team[i]== '1'){
            a++;
            b=0;
        }
        else if(team[i]== '0'){
            b++;
            a=0;
        }
        if(a >=7 || b >=7)
            break;
    }

    if(a >= 7 || b >= 7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
