#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,t,n,m,max=0,x=0;
    scanf("%d\n",& n);
    scanf("%d\n",& m);
    int arr[m];
    for(i=0;i<m;i++)
    { scanf("%d",& arr[i]);}
    int c[i];
    for(i=0;i<m;i++)
        
    { t=arr[i];
      c[i]=0;
        for(j=i;j<m;j++)
    {if(t==arr[j])
     c[i]++;
   
     }
    }
   
    for(i=0;i<m;i++)
    
    { if(c[i]==max)
      {x=-1;}
     if(c[i]>max)
     {
        max=c[i];
        x=arr[i];
    }}
     printf("%d",x);
     
    
     
    
        
    return 0;
}
