#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

typedef struct point
{
	int x, y;
}pt;

typedef struct rectangle
{
	char name[20];
	pt pt1;
	pt pt2;
}rect;

typedef struct circle
{
	char name[20];
	pt c1;
	int radius;
}cl;

typedef union shape
{
	rect r;
	cl c;
}sh;
 int rectang(rect r)
    {  scanf(" {{%d",&r.pt1.x);
    scanf(",%d",&r.pt1.y);
    scanf("},{%d",&r.pt2.x);
    scanf(",%d}}",&r.pt2.y);
    int a=r.pt2.x-r.pt1.x;
    if(a<0)
    {a=-1*a;}
    int b=r.pt1.y-r.pt2.y;
    if(b<0)
    {b=-1*b;}
    float area=(float)a*b;
    printf("%.2f\n",area);
    return 0;}
    
    
  float circle(cl c)
   
    { 
        scanf(" {{%d",&c.c1.x);
    scanf(",%d",&c.c1.y);
    scanf("},%d}",&c.radius);
    float area2;
     area2=pi*(c.radius)*(c.radius);
     printf("%.2f\n",area2);
    return 0; }
       
   

      

void area_shape(sh s[],int n2)
{   for(int i=0;i<n2;i++)
   { scanf("%s",s[i].r.name);
     if(!(strcmp(s[i].r.name,"rectangle")))
       rectang(s[i].r);
    if(!(strcmp(s[i].r.name,"circle")))
        circle(s[i].c);
   }
}
    
    
int main() {
    int n;
    
    
   
    scanf("%d",& n);
    sh arr1[n];
     printf("%d\n", n);
    area_shape(&arr1[0],n);
    
    
  
    return 0;
}
    
    
  
