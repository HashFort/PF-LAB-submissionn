/*Write a program to create a Loan EMI Calculator that calculates the monthly EMI for a loan
and takes input the Loan Amount (float), Annual Interest Rate (float in %), Loan Duration
(years, integer) and formula for calculating EMI is EMI = [P × r × (1 + r)^n] / [(1 + r)^n – 1],
where P = Principal Loan Amount, r = Monthly Interest Rate = Annual Rate/(12*100), n = Total
Months = Years * 12*/
#include<stdio.h>
#include<math.h>
int main()
{
	
float loam,ann,emi,p,r;
int lodu,n;	
	printf("\n Enter Loan Amount:");
	scanf("%f",&loam);
	printf("\n Enter Annual Interest Rate (%%):");
	scanf("%f",&ann);
	printf("\n Enter Loan Duration(years):");
	scanf("%d",&lodu);
	p=loam;
	r=ann/(12*100);
	n=lodu*12;
emi=(p*r*pow(1+r,n))/(pow(1+r,n)-1);
	
 printf("\n-------------------------------------------------");
 printf("\n\t LOAN EMI CALCULATOR");
 printf("\n-------------------------------------------------");
 	printf("\n  Loan Amount:%.2f",loam);

	printf("\nInterestRate:%.2f %% per year",ann);

	printf("\n Duration:%d years (%d months)",lodu,n);
	 printf("\n-------------------------------------------------");
	printf("\n Monthly EMI:%f",emi);
	return 0;
	
}
