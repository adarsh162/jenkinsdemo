#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct point
{
	int x, y;
}pt;

typedef struct rectangle
{
	pt pt1;
	pt pt2;
}rect;


  
    int main() {
   rect r1;
    scanf("%d, %d\n",&r1.pt1.x,&r1.pt1.y);
    scanf("%d, %d\n",&r1.pt2.x,&r1.pt2.y);
  if(r1.pt1.x==r1.pt2.x||r1.pt1.y==r1.pt2.y)
  {printf("-1");}
        else{
        
  int a=r1.pt2.x-r1.pt1.x;
  if(a<0)
    a=-1*a;
  int b=r1.pt1.y-r1.pt2.y;
   if(b<0)
       b=-1*b;
  int area=a*b;
   printf("%d\n",area);
  int para=2*(a+b);
  printf("%d",para);}
    

   
    return 0;
}