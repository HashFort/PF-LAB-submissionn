/*You抮e simulating temperature in a 3󫢫 cube of a greenhouse. Each value represents
temperature at a point. Write a program to user Input temperatures then calculate
average temperature per layer (z-axis) and find and display the hottest layer. Display
coordinates of the maximum temperature point.*/
#include<stdio.h>
int main()
{

int sum1[3][3][3],sum=0,i,j,k,temp[3][3][3],sum2[3],layer,max1,maxx=0,maxy=0,maxz=0;
float max,avg[3];

	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
		printf("\n Enter the temperature of a 3x3x3 cube of Greenhouse with coordinates (%d,%d,%d) : ",i+1,j+1,k+1);
				scanf("%d",&temp[i][j][k]);
			sum=sum+temp[i][j][k];
		}
	}
	sum2[i]=sum;
}


for(i=0;i<3;i++)
{
	avg[i]=sum2[i]/9;
}



max=avg[0];

for(i=1;i<3;i++)
{
	if(avg[i]>max)
	{
		max=avg[i];
		layer=i;
	}
}
printf("\n the Hottest layer is (%d) with an average temperature of: %.2f",layer+1,max);


max1=temp[0][0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(temp[i][j][k]>max1)
				{
				max1=temp[i][j][k];
				maxz=i;
				maxy=j;
				maxx=k;
				}
			}
	}
}
	printf("\n the Maximum Temperatrue is (%d) with the coordinate (%d,%d,%d)",max1,maxz+1,maxy+1,maxx+1);
	return 0;



}

