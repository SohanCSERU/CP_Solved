#include<stdio.h>
int main()
{
int N,i,wsh,wsm,weh,wem,msh,msm,meh,mem,wt1,wt2,mt1,mt2;

scanf("%d",&N);

for(i=1;i<=N;i++)
{
scanf("%d:%d %d:%d",&wsh,&wsm,&weh,&wem);
scanf("%d:%d %d:%d",&msh,&msm,&meh,&mem);
wt1=wsh*60+wsm;
wt2=weh*60+wem;
mt1=msh*60+msm;
mt2=meh*60+mem;

if(mt2<wt1 || wt2<mt1)
printf("Case %d: Hits Meeting\n",i);
else
printf("Case %d: Mrs Meeting\n",i);
}
return 0;

}
