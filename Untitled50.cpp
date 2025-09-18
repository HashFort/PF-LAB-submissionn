/*Write a C program to classify the incident severity based on a severity code (1-4) entered by the security
analyst.
? 1 ? Low (Unusual login time)
? 2 ? Medium (Suspicious failed attempts)
? 3 ? High (Multiple accounts targeted)
? 4 ? Critical (Brute-force/DDoS attack detected)
? Default ? "Invalid Code: Enter a number between 1 and 4"*/
#include<stdio.h>
int main()
{
	int code;
	printf("\n ENTER THE SERVERITY CODE:");
	scanf("%d",&code);
	switch(code)
	{
		case 1:
		printf("\nLow (Unusual login time)");
		break;
		case 2:
		printf("\nMedium (Suspicious failed attempts)");
		break;
		case 3:
		printf("\nHigh (Multiple accounts targeted)");
		break;
		case 4:
		printf("\nCritical (Brute-force/DDoS attack detected)");
		break;
		default:
			printf("\n Invalid Code: Enter a number between 1 and 4");

	return 0;
	}}
