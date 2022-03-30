#include <stdio.h>

int main() {

  int x,y,z;
    
    scanf("%d",& x);
    y=x;
    z=y+8;
    while(y<=z)
    { if((y%2)==0)
     {printf("%d ",y);
      y=y+2;
     }
     else{
    y=x+1;
    z=z+1;
    printf("%d ",y);
    y=y+2;}
    }
     
     
    
    return 0;
}