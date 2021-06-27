#include<stdio.h>
int main()
{
	int n,i,p,d,e,k=1,r,j,c=4;
	int comp[]={4,6,8,9};
	printf("Enter a number = ");
	scanf("%d",&n);
	while(c!=n && c<n)
	{
		p=n-c;
		d=0;
		e=0;
		for(i=0;i<4;i++)
		{
			if(p==comp[i])
			{
				c=c+comp[i];
				k++;
				d++;
			}
			else
			{
				for(j=i+1;j<4;j++)
				{
					r=comp[i]+comp[j];
					if(p==r)
					{
						c=c+comp[i]+comp[j];
						k=k+2;
						e++;
					}
				}
			}
		}
		if(d==0 && e==0)
		{
			c=c+4;
			k=k+1;
		}
	}
	if(c==n)
	{
		printf("\n%d",k);
	}
	else
	printf("\n-1");
}
