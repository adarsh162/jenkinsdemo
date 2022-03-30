#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int x,y,z;
    scanf("%d\n",& x);
    scanf("%d\n",& y);
    scanf("%d\n",& z);
    if((x>y)&&(x>z)){
        printf("%d",x);
    }
    if((y>x)&&(y>z)){
        printf("%d",y);
    }
    if((z>y)&&(z>x)){
        printf("%d",z);
    }
    if((x==y)&&(y==z)){
        printf("%d",x);
    }
    if((x==y)&&(x>z)){
        printf("%d",x);
    }
    if((y==z)&&(y>x)){
        printf("%d",y);
    }
    
    if((x==z)&&(x>y)){
        printf("%d",x);
    }
    
    
    
    return 0;
}
