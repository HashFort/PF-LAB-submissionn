/*An airline uses a 10×4 seating grid for economy class (10 rows, 4 seats per row). Write a
program that marks reserved seats as 1 and available seats as 0, then takes user input for
reservations, displays a seat map showing available/reserved seats and displays how
many full rows are completely booked.*/
#include<stdio.h>
int main()
{
	int seats[10][4],i,count=0,row=0,j;
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<4;j++)
		{
		printf("\n Enter (0) if seat %d of row %d is available or (1) if not:",j+1,i+1);
		scanf("%d",&seats[i][j]);
		if(seats[i][j]==1)
		{
			count=count+1;
		}
		if(count==4)
		{
			row=row+1;
		}
		}
	}
	
		printf("\n\n --------------- RESERVATION OF AVAILABLE SEATS ---------------");
	
		
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
	if(seats[i][j]==0)
	{
		printf("\n Seat %d of Row %d is Available",j+1,i+1);
		printf("\n Do you want to reserve This seat? (2) for yes (0) for no: ");
		scanf("%d",&seats[i][j]);
	}
	
	}
	}
	printf("\n\n--------------- SEAT MAP ---------------");
	
for(i=0;i<10;i++)
{
	for(j=0;j<4;j++)
	{
		if(seats[i][j]==0)
		{
		printf("\n Seat %d of row %d is Available",j+1,i+1);
		}
		else if(seats[i][j]==1  || seats[i][j]==2)
		{
			printf("\n Seat %d of row %d is Reserved",j+1,i+1);
		}
	}
		
}
	printf("\n The number of rows fully booked are:%d",row);
	return 0;
		}
	
		
	
	
	
	
	
	
	
	
	
	

