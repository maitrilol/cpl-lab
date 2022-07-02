//program to compute a quadratic equation by accepting coefficient
#include<stdio.h>
#include<math.h>
int main()
{
	//input coefficients
	float a,b,c,d,r1,r2,rp,ip;
	printf(" Enter the coefficients a,b,c respectively:");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
    	printf("This isn't a quadratic equation");
    	return 2;
    }
    
    d=b*b-4*a*c;
    if(d==0)
    {
    	printf(" The roots are real and equal \n");
    	r1=r2= -b/(2*a);
    	printf("r1=%f \n r2=%f \n",r1,r2);
    }
    else if(d>0)
    {
		printf(" The roots are real and distinct \n");
		r1= (-b+ sqrt(d))/(2*a);
		r2= (-b- sqrt(d))/(2*a);
		printf("r1=%f \n r2=%f \n",r1,r2);
	}
	else if(d<0)
	{
		printf(" The roots are imaginary \n");
		rp= -b/(2*a);
		ip= sqrt(-d)/(2*a);
		printf("r1=%f+i%f \n",rp,ip);
		printf("r2=%f-i%f \n",rp,ip);
	}
}	
		
      
    
    
  
