#include <stdio.h>
int main()
{
   int n,T,reverse = 0;
   scanf("%d",&T);
   while(T--){
   scanf("%d", &n);

   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n=n/10;
   }

   printf("%d\n", reverse);
         reverse=0;
   }
   return 0;
}
