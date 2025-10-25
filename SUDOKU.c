/*A partially filled 3×3 Sudoku box is stored in a 2D array. Write a program to check whether
all entered numbers are between 1–9 also check for any duplicate numbers in the 3×3
grid and Print “Valid Grid” or “Invalid Grid”.*/
#include<stdio.h>
int main()
{
	int sud[3][3],i,j,in=0,m=0,a,b;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n Enter the number.It should be from 1 to 9: ");
		scanf("%d",&sud[i][j]);
		}
	}

for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(sud[i][j]<0 ||sud[i][j]>10)
			{
				in=in+1;
			}
		}}
		
for ( i = 0; i < 3; i++)
 {
    for ( j = 0; j < 3; j++) 
	{
        for ( a = i + 1; a < 3; a++) 
		{
            for ( b = 0; b < 3; b++) 
			{
                if (sud[i][j] == sud[a][b])
				 {
                   m=0;
                    break;
                }
            }
            if (m==0)
			 {
                break;
            }
        }
 
        for ( b = j + 1; b < 3; b++)
		 {
            if (sud[i][j] == sud[i][b])
			 {
                m=0;
                break;
            }
        }
        if (m==0) 
		{
            break;
        }
    }
    if (m==0)
	 {
        break;
    }
}
		
	if(in>0|| m==0)
	{
		printf("\n INVALID GRID");
			}	
			
	else	
		{
			printf("\n VALID GRID");	
		}
		return 0;
	}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
