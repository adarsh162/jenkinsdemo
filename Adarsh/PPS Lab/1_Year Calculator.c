#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a,b,c,d,e;
     scanf("%d",&a);
     b=a/360;
     c=a-(360*b);
     d=c/30;
     e=c-(30*d);
     
     printf("%d:%d:%d",b,d,e);
     
    return 0;
}
