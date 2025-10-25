/*A company stores data in a 3×3 matrix and wants to encrypt it using a key matrix.
Encryption rule:
Encrypted[i][j] = (Data[i][j] × Key[i][j]) + (i + j)
Write a program to user input two 3×3 matrices and perform encryption as well as display
the encrypted matrix then finally Identify the cell with the maximum encrypted value.*/
#include <stdio.h>
int main() 
{
    int data[3][3];
    int key[3][3];
    int enc[3][3];
    int i,j;

    for (i=0;i<3;i++)
	 {
        for(j=0;j<3;j++) 
		{
            printf("ENTER ELEMENTS OF DATA MATRIX (%d,%d) ",i+1,j+1);
            scanf("%d",&data[i][j]);
        }
    }
    
    
    for (i=0;i<3;i++)
	 {
        for (j=0;j<3;j++)
		 {
           printf("ENTER ELEMENTS OF KEY MATRIX (%d,%d) ",i+1,j+1);;
            scanf("%d", &key[i][j]);
        }
    }
    
   
    for (i=0;i<3;i++)
	 {
        for (j=0;j<3;j++)
		 {
            enc[i][j] = (data[i][j] * key[i][j]) + (i + j);
        }
    }
    
    
   
   
    for (i=0;i<3;i++)
	 {
        for (j=0;j<3;j++)
		 {
            printf("%d", enc[i][j]);
        }
        printf("\n");
    }
    
    int max=enc[0][0];
    int maxx=0,maxy=0;
  
    for (i=0;i<3;i++)
	 {
        for (j=0;j<3;j++)
		 {
            if (enc[i][j] > max) 
			{
                max= enc[i][j];
                maxx=i;
                maxy=j;
            }
        }
    }
    
    printf("\n--- Maximum Encrypted Value ---\n");
    printf("Maximum value: %d\n",max);
    printf("Located at cell: [%d][%d]\n",maxx+1,maxy+1);
    
    return 0;
}

	
	
