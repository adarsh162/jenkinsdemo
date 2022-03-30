#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int i,rows,col,j;
    scanf("%d\t%d\n",& rows,& col);
    int arr[rows][col];
    printf("%d\t%d\n",col,rows);
    for(i=0;i<rows;i++)
    { for(j=0;j<col;j++)
    {scanf("%d",& arr[i][j]);}
    }
    for(i=0;i<col;i++)
    { for(j=0;j<rows;j++)
    {printf("%d\t",arr[j][i]);}
    
   
     printf("\n");
    }
    return 0;
}
