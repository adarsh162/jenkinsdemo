#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d",& x);
    ((x%5==0)||(x%7==0))?printf("%d",x):printf("0");

    
    return 0;
}
