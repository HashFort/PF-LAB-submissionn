/* Write a C program that asks the student to enter their last 4 digits of student ID. If the entered student ID
matches the registered one (i.e. 2050) then print "Valid User: Proceed to login". Otherwise print
"Unknown User: Access Denied".*/

#include<stdio.h>
int main()
{
	int a=2015;
	printf("\n ENTER last four digits of student ID: ");
	scanf("%d",&a);
	if(a==2015)
	{
		printf("\n Valid User: Proceed to login");
	}
	else
	
		printf("\n Unknown User: Access Denied");
return 0;	
}
