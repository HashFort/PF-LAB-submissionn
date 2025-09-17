/*Create a Student CGPA Calculator that takes marks of your 1stsemester’s subjects (float), each
subject is out of 100. Calculate percentage and convert percentage into CGPA (out of 4.0 scale)
using the formula CGPA = (Percentage/100) * 4 and display with proper formatting.*/
#include<stdio.h>
int main()
{
	
	float mar,per,CGPA,tot=0;
	int n;
	
	printf("\n Enter number of subjects:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	printf("\n Marks of subject(out of 100):");
	scanf("%f",&mar);
		tot=tot+mar;	
	}
	printf("\n------------------------------------------------");
	printf("\n STUDENT RESULT");
	printf("\n------------------------------------------------");
	printf("\n TOTAL:%.2f",tot);
	per=(tot/(n*100))*100;
		printf("\n PERCENTAGE:%.2f",per);
		CGPA=(per/100)*4;
			printf("\n CGPAL:%.2f /4.0",CGPA);
	return 0;
		
	
}
