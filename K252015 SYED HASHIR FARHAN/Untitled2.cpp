/*Write a program to create a Shopping Receipt Generator which takes as input eggs, bread and
butter prices as float with 2 decimal places and then generate a receipt showing each item’s
price, subtotal, 17% sales tax and final total.*/

#include<stdio.h>
int main()
{
	
float egg,bread,butter,subtotal,tax,tot;

 printf("\n Item 01 price:");
 scanf("%f",&egg);
 printf("\n Item 02 price:");
 scanf("%f",&butter);
 printf("\n Item no 03 price:");
 scanf("%f",&bread); 
 
 subtotal=egg+butter+bread;
 tax=(subtotal)*(0.17);
  tot=tax+subtotal;
  
 printf("\n-----------------------------------");
printf("\n\t SHOPPING RECEIPT");
printf("\n Price no.1:%.2f",egg);
printf("\n Price no.1:%.2f",butter);
printf("\n Price no.1:%.2f",bread);
 
 printf("\n-----------------------------------");
 printf("\n SUBTOTAL:%.2f",subtotal);
 printf("\n Sales Tax:%f",tax);
  
 printf("\n-----------------------------------");
  printf("\n Total:%.2f",tot);
  
  return 0;		
}
