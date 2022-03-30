#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int R1,C1,R2,C2,i,j,k,sum=0;
    
    
    
    scanf("%d\t%d\n",& R1,& C1);
    scanf("%d\t%d\n",& R2,& C2);
    if(C1==R2)
    {
        int matrix1[R1][C1];
        int matrix2[R2][C2];
        int result[R1][C2];
    for(i=0;i<R1;i++)
    {for(j=0;j<C1;j++)
        scanf("%d\t",& matrix1[i][j]);
    }
    for(i=0;i<R2;i++)
    {for(j=0;j<C2;j++)
        scanf("%d\t",& matrix2[i][j]);
    }
    printf("%d\t%d\n",R1,C2);
    for(i=0;i<R1;i++)
    {for(j=0;j<C2;j++){
     for(k=0;k<R2;k++)
     {sum+=matrix1[i][k]*matrix2[k][j];
     }
     result[i][j]=sum;
     sum=0;  
    }
    }
    for(i=0;i<R1;i++)
    {for(j=0;j<C2;j++)
    {printf("%d\t",result[i][j]);}
     printf("\n");
    }
    }
    else
    printf("MULTIPLICATION NOT POSSIBLE");
      return 0;
}
