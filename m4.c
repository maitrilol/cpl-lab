#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
  float degree,x;
  printf("Enter degree: ");
  scanf("%f",&degree);
  x= degree*(PI/180);
  
  //initialization
  float nume,deno,sum,i,term;
  
  nume=x;
  deno=1;
  i=1;
  sum=0;
  
  do
  {
	 term=nume/deno;
	 sum=sum+term;
	 i=i+2;
	 nume= -nume*x*x;
	 deno= deno*i*(i-1);
  }
  while(fabs(term)>0.00001);
  
  printf ("Taylor series compluted   value=  sin(%f)=%f \n",degree,sum);
  printf(" value of sin(%f) = %f \n",degree,sin(x));
  return 0;
}
