#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int z;
    int x,y;
    scanf("%d %d %d",&x,&y,&z);
    if(z==1)
    { printf("%d",x+y);}
     if(z==2)
     { printf("%d",x-y);}
     if(z==3)
     { printf("%d",x*y);}
     if(z==4)
     {printf("%f",(float)x/y);}
    
    return 0;
}
