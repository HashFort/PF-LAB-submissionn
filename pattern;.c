/*Generate a pattern of digits in the following form:
1
12
123
1234
12345
Then reverse it in the same output:
12345
1234
123
12
1
modify the code so the pattern displays triangular multiplication values instead (e.g., i×j).*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
}
		printf("\n");
		printf(" REVERSED ORDER \n");	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

		printf("\n");
		printf("TRIANGULAR MULTIPLICATION\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i*j);
		}
		printf("\n");
	}
	return 0;
}




