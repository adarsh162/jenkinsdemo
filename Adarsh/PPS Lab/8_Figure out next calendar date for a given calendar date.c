#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int year,month,dates;
}date;

int main() {

    int num;
     scanf("%d\n",&num);
     date d[num];
    
    for(int  i=0 ; i < num ; i++)
    {
        scanf("%d %d %d\n",&d[i].year,&d[i].month,&d[i].dates);
    }
    for(int i =0 ; i < num ; i++)
    {
        d[i].dates++;
        
       switch (d[i].month)
       {
           case 1:
           case 3:
           case 5:
           case 7:
           case 8:
           case 10:
           case 12:
               if(d[i].dates > 31)
               {
                   d[i].dates = d[i].dates - 31;
                   d[i].month++; 
               }
               break;
               
           case 4:
           case 6:
           case 9:
           case 11:
               if(d[i].dates > 30)
               {
                   d[i].dates = d[i].dates - 30;
                   d[i].month++; 
               }
               break;
               
           case 2:
               if(d[i].year % 400 ==0 || (d[i].year%4==0 && d[i].year%100!=0) )
               {
                        if(d[i].dates>29)
                        {
                            d[i].dates = d[i].dates -29;
                            d[i].month++;
                        }
               }else {
                       d[i].dates = d[i].dates -28;
                          d[i].month++;
                      }   
               break;
               
       }
        if(d[i].month>12)
        {
            d[i].month=d[i].month-12;
            d[i].year++;
        }
        printf("%04d %02d %02d\n",d[i].year,d[i].month,d[i].dates);   
    } 
    return 0;
}