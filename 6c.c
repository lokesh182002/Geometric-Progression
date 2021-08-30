#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the values of x");
	scanf("%d",&x);
	if(x<0||n<0)
	{
		printf("Illegal Value");
    }
		else
		{
			for(i=0;i<n;i++)
			sum=sum+pow(x,i);
			}
			printf("%d",sum);
		
		return 0;
		
}
