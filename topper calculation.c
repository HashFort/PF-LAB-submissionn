/*A 3D array [class][student][subject] stores marks of 2 classes, each with 3 students, across
3 subjects. Write a program to calculate total marks of each student then find class
toppers and overall topper and Display “Top Performer of Class X: Student Y with Z marks”.*/
#include<stdio.h>
int main()
{
int	ot[2][3][3],total=0,i,j,k,to[2][3],student1,student2,max1,max2;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			total=0;
			for(k=0;k<3;k++)
			{
				printf("\n Enter marks of Subject %d of Student %d in Class %d: ",k+1,j+1,i+1);
				scanf("%d",&ot[i][j][k]);	
				total=total+ot[i][j][k];
			}
			to[i][j]=total;
		}
	}
	
 max1=to[0][0];
 max2=to[1][0];



	
	for(j=1;j<3;j++)
	{
		if(to[0][j]>max1)
		{
			max1=to[0][j];
			student1=j;
		}
	}
	printf("\n The class topper of Class 1 is Student %d with marks: %d",student1+1,max1);
	
	for(j=1;j<3;j++)
	{
		if(to[1][j]>max2)
		{
			max2=to[1][j];
			student2=j;
		}
	}
	printf("\n The class topper of Class 2 is Student %d with marks: %d",student2+1,max2);
	
	if(max1>max2)
	{
		printf("\n The overall topper of both classes is Student %d of Class 1 with marks %d",student1+1,max1);
	
	}
	else if(max2>max1)
	{
		printf("\n The overall topper of both classes is Student %d of Class 2 with marks:%d",student2+1,max2);
	
	}
	
	return 0;
}
	
	
