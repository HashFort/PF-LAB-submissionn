/*2. Write a C program to ask user to provide number of failed login attempts and check.
? If attempts = 0 ? print "No suspicious activity"
? If attempts between 1 and 3 ? print "Warning: User may have forgotten password"
? If attempts between 4 and 6 ? print "Alert: Possible unauthorized access attempt"
? Else (>6) ? print "Critical: Account Locked due to brute-force attempt"*/

#include<stdio.h>
int main()
{
	int attempt;
	printf("\n Provide number of failed login attempts:");
	scanf("%d",&attempt);
	if(attempt==0)
	printf("No suspicious activity");
      else if(attempt>=1 &&attempt<=3 )
      printf("Warning: User may have forgotten password");
      else if(attempt>=4 &&attempt<=6)
      printf("Alert: Possible unauthorized access attempt");
        else if(attempt>6)
         printf("Critical: Account Locked due to brute-force attempt");
return 0;
}
  
