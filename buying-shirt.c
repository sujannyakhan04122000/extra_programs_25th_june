#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,b,j,sum,add,d=0,c=0,i;
	int*price;
	int*ptr;
	printf("Enter the number of test cases = ");
	scanf("%d",&t);
	ptr=(int*)malloc(t*sizeof(int));
	do
	{
		printf("\nEnter the number of shirts and budget=");
		scanf("%d %d",&n,&b);
		printf("\nEnter the price of %d shirts: ",n);
		price=(int*)malloc(n*sizeof(int));
		add=0;
		sum=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&price[j]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(price[i]>price[j])
				{
				temp=price[i];
				price[i]=price[j];
				price[j]=temp;
			    }
			}
		}
		for(j=0;j<n;j++)
		{
			sum=price[j]+sum;
			if(sum<=b)
			{
				add=add+1;
			}
		}
		if(d<t)
		{
			ptr[d]=add;
			d++;
		}
		c++;
		}while(c<t);
		for(i=0;i<t;i++)
		{
			printf("\nCase #%d: %d",i+1,ptr[i]);
		}
}
