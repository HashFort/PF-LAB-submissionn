/*Write a program to create an Electricity Bill Calculator which will ask the user for Customer
Name, Units Consumed (value should be of integer), Price per Unit (value should be of float)
and calculate the Total Bill and display it in a formatted bill slip.*/

#include<stdio.h>
int main()
{
	char a[50];
	int t;
	float b;
	float tot;
	
	printf("\n-----------------------------------");
printf("\n\t ELECTRICITY BILL");
printf("\n-----------------------------------");
	printf("\n Customer name:");
		scanf("%s",&a);

	printf("\n Units consumed:");
	scanf("%d",&t);
	printf("\n Price per unit:");
	scanf("%f",&b);
	printf("\n-----------------------------------");
	tot=t*b;
	printf("\n Total Bill:%f",tot);
	printf("\n-----------------------------------");
	return 0;	
	
}
