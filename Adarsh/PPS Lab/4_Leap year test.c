#include <stdio.h>

int main() {
    int x;
    scanf("%d",& x);
    if((x%400)==0)
    { printf("yes");}
    if((x%400)!=0&&(x%100)==0)
        { printf("no");}
    if((x%100)!=0&&(x%4)==0)
        { printf("yes");}
     if((x%4)!=0)
    { printf("no");}
    
        
    
        
    
    return 0;
}