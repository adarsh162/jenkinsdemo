#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int find_gcd(unsigned long long int i,unsigned long long int j){
    if(i==0)
    return j;
    return find_gcd(j%i,i);
}
          
        


 
int main() {

   unsigned long long int i,j;
    int n;
    scanf("%llu %llu",& i,& j);
    n=find_gcd(i,j);
    printf("%d",n);
    
    return 0;
}
