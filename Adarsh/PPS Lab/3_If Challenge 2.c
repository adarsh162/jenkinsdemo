#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int long  x,y;
    scanf("%ld",& x);
    y=printf("%ld",x);
    if((x>=0)&&(y%2)!=0){

        printf("%ld",y);
        
    }
    if((x>=0)&&(y%2)==0){
        y;
    }
        
    
    if((x<0)&&(y%2)!=0){
        
        printf("%ld",y);
        
    }
    if((x<0)&&(y%2)==0){
        y;
    }
 
 
  
  
    return 0;
}
