#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float degree,x;
	float nume,deno,sum,i,term;
	printf("Enter degree: ");
	scanf("%f",&degree);
	x = degree* (PI/180);
	
	
	nume=1;
	deno=1;
	i=0;
	sum=0;
	
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume= -nume*x*x;
		deno = deno*i*(i-1);
	}while(fabs(term)>0.00001);
	
	 printf ("Taylor series compluted   value=  cos(%f)=%f \n",degree,sum);
     printf(" value of cos(%f) = %f \n",degree,cos(x));
     return 0;
 }
