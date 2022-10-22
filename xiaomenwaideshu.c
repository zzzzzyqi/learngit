#include<stdio.h>
int main()
{
	int L,M,start,end,i,a[10000]={0},sum=0;
	scanf("%d %d",&L,&M);

	while(M-->0)
	{
		scanf("%d %d",&start,&end);
		while(start++<=end)
		{
			a[start-1]=1; 
		}
	}
	for(start=0;start<=L;start++)
	{
		if(a[start]==1)
		{
			sum+=1;
		}
	}
	printf("%d",L+1-sum);
}
