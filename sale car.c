/*A store keeps sales data for 4 salesmen across 5 products. Write a program to user input
sales data into a 2D array then compute total sales per salesman and per product and
identify which salesman sold the most expensive product then apply a 10% bonus for
salesmen whose total sales exceed Rs. 10,000.*/
#include<stdio.h>
int main()
{

int sale[4][5],total=0,tota[4],i,j,best=0,max,man,max1;
int sum=0, sum1[5];


for(i=0;i<4;i++)
{ total=0;
	for(j=0;j<5;j++)
	{
		printf("\n Product %d of Saleman %d is of price: ",j+1,i+1);
		scanf("%d",&sale[i][j]);
		total=total+sale[i][j];
	}
	tota[i]=total;
	
}

for(i=0;i<5;i++)
{
	sum=0;
	for(j=0;j<4;j++)
	{
		sum=sum+sale[j][i];
	}
	sum1[i]=sum;

 	printf("\n The Sum of the %d products of the 4 salemen is : %d",i+1,sum1[i]);

}
max=tota[0];
for (i=1; i< 4;i++)
 {
    if (tota[i] > max)
	 {
        max=tota[i];
        best= i;
    }
}
		printf("\n The Saleman %d has the highest total of: %d",best+1,max);
max1=sale[0][0];
for(i=0;i<4;i++)
{
	for(j=1;j<5;j++)
	{  
	if(sale[i][j]>max1)
	{
		max1=sale[i][j];
		man=i;
		
	}}}

	printf("\n The highest priced product is : %d",max1);

for(i=0;i<4;i++)
{
	if(tota[i]>10000)
	{
	float bonus=tota[i]*(0.1);
	printf("\n Salesman %d is eligible for 10% % bonus: %.2f",i+1,bonus);
	}
}
return 0;
}




