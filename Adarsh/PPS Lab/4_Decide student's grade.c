#include <stdio.h>

int main() {

   int x;
    scanf("%d",& x);
    if (x>=90)
    {printf("AA");}
    if ((x>=80)&&(x<90))
    {printf("AB");}
    if ((x>=70)&&(x<80))
    {printf("BB");}
    if ((x>=60)&&(x<70))
    {printf("BC");}
    if ((x>=50)&&(x<60))
    {printf("CC");}
    if ((x>=40)&&(x<50))
    {printf("CD");}
    if (x<40)
    {printf("DD");}
    
   
    return 0;
}