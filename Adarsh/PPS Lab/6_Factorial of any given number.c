#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


long factorial(int i)
{
 long int r;
 if(i==0)
    return 1;
 if(i==1)
    return 1;
  else
  r=i*factorial(i-1);
   return r;

}

int main()
{

    int n;
  	long fact;
  
  	scanf("%d", &n);
  	fact = factorial(n);
  	printf("%ld", fact);
  
    return 0;
}

