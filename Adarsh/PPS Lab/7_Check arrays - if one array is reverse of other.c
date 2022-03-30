#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

short is_reverse(const int *const arr1, const int *const arr2, int x)
{ for(int i=0;i<x;i++)
{if(*(arr1+i)!=(*(arr2+i)))
    {return 0;
     break;}}

 return 1;

 
    
    }
int main() {

   int i,x;
    scanf("%d\n",& x);
    int arr1[x];
    int arr2[x];
    for(i=0;i<x;i++)
    {scanf("%d",&arr1[i]);}
     for(i=x-1;i>=0;i--)
    {scanf("%d",&arr2[i]);}
    x=is_reverse(arr1,arr2,x);
    printf("%d\n",x);
    
    
    return 0;
}