#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int n;
int sort(int abc[],int n)
{    int i,j,temp,min_index;
    for(i=0;i<n-1;i++)
  { min_index=i;
    for(j=i+1;j<n;j++)
    { if(abc[j]<abc[min_index])
      min_index=j;
    }
   temp=abc[i];
   abc[i]=abc[min_index]; 
   abc[min_index]=temp;
  }
 return 0;
}
    
int main() {
    int i;
    scanf("%d",& n);
    int abc[n];
    for(i=0;i<n;i++)
    scanf("%d ",& abc[i]);
    sort(abc,n);
    printf("%d\n",n);
    for(i=0;i<n;i++)
    printf("%d ",abc[i]);

    
    return 0;
}
