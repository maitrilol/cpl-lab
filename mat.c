#include<stdio.h>
int main()
{
    
    int m,n,p,q;
    printf("Enter number of rows and columns for matrix A: ");
    scanf("%d%d",&m,&n);
    
    printf("Enter number of rows and columns for matrix B: ");
    scanf("%d%d",&p,&q);
    
    int a[m][n];
    int b[p][q];
    int c[m][q];
    
    if(n!=p)
    {
    	printf("Cannot be multiplied");
    	return 2;
    }
    
    else
    { 
    	printf("\n Enter the elements of MATRIX-A:\n");
    	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{

				scanf("%d\t",&a[i][j]);
			}
			printf("\n");
		}
	
	
		printf("\n Enter the elements of MATRIX-B:\n");
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{

				scanf("%d\t",&b[i][j]);
			}
			printf("\n");
		}
		
		
    
		//display array elements in matrix format
		printf("\nMATRIX-A\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{

				printf("%d\t",a[i][j]);
			}
			printf("\n");
	
		}
		printf("\nMATRIX-B\n");
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{

				printf("%d\t",b[i][j]);
			}
			printf("\n");

		}
		return 0;
		
		
	}
}
