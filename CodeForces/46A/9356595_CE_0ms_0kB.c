You set the nickname for Shafquat Mahbub to Pagla Baba.
Shafquat Mahbub
Pagla Baba
#include<stdio.h>

int main()
{
	int n, i, j, k=2;
	scanf("%d",&n);
	for(j=2,i=1;i<n;i++)
	{
		printf("%d",j);
		if(i==n-1)
			printf("\n");
		else
			printf(" ");
		j=j+k;
		k++;
		if(j>n)
			j=j%n;
	}
	return 0;
}
