#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n;
    scanf("%d",& n);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",& arr[i]);}
    for(j=n-1;j>=0;j--)
    {printf("%d ",arr[j]);}
    
        
    return 0;
}
