#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int x,i;
    scanf("%d",& x);
    while(1)
    {
       
            if((x%4==0 && x%100!=0) || (x%400==0))
            break;
        else
            x++;
    }
    for(i=0;i<15;i++)
    {printf("%d ",x);
      x=x+4;}
       
    return 0;
}
