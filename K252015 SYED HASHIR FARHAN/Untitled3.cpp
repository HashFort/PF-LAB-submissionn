/*Write a program to create a Fuel Consumption Tracker that calculates car’s efficiency and
takes input distance travelled (km, float), fuel used (litres, float), fuel price per litre, fuel price
per litre(float) and gives output distance travelled, fuel consumption (km per litre with 2
decimal places) and total fuel cost.*/
#include<stdio.h>
int main()
{
	float dis,fuel,fpr,con,eff,tot;
printf("\n Enter distance travelled(km):");
scanf("%f",&dis);
printf("\n Enter Fuel used(litres):");
scanf("%f",&fuel);
printf("\n Enter Price Per Litre:");
scanf("%f",&fpr);
printf("\n------------------------------------------------");
printf("\n FUEL CONSUMPTION TRACKER");
printf("\n------------------------------------------------");
	eff=dis/fuel;
	tot=fuel*fpr;
	printf("\n DISTANCE TRAVELLED:%.2f km",dis);
		printf("\n FUEL CONSUMPTION:%.2f litre",fuel);
		printf("\n EFFICIENCY:%.2f km/litre",eff);
		printf("\n------------------------------------------------");
			printf("\n TOTAL FUEL COST:%.3f PKR",tot);
			return 0;
}
