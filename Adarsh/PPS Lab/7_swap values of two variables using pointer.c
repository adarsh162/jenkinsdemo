#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  	int x , y,z;
  	int *xp = &x, *yp = &y;
    scanf("%d %d", xp, yp);
    z=*yp;
    *yp=*xp;
    *xp=z;
    
  
  	
  	printf("%d %d", x, y);
    return 0;
}