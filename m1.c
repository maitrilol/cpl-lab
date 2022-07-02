//program to simulate a simple calculator
#include<stdio.h>
int main()
{
  //variable declaration
  int num1, num2, res;
  char op;
  
  //accept operator
  
  printf("Enter an arithmetic operator :");
  scanf("%c", &op);
  
  //accept two integer
  
  printf("Enter two numbers ");
  scanf("%d%d", &num1, &num2);
  
  if(op == '+')
  {
    res = num1 + num2;
  }
  
  else
  if(op == '-')
  {
    res = num1 - num2;
  }
  
  else
  if(op == '*')
  {
    res = num1 * num2;
  }
  
  else
  if(op == '/')
  {
   
    if(num2 == 0)
    {
      printf("Divide by zero error\n");
      return 2;
    }
    else
    {
      res = num1 / num2;
    }
    
  }
  
  else
  if(op == '%')
  {
    if(num2 == 0)
    {
      printf("Divide by zero error\n");
      return 1;
    }
    
    else
    {
      res = num1 % num2;
    }
  }
  
  else
  {
    printf("Invalid operator");
    return 1;
  }
  printf("%d %c %d = %d",num1,op,num2,res);
 
  return 0;
}
