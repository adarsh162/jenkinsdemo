#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 typedef struct 
 {   char name[15];
      int ID;
      float exp;
      float sal;
 }employ;

int main() {
    int n,count=0;
  scanf("%d\n",& n);
   employ p[n];
    for(int i=0;i<n;i++)
        scanf("%s %d %f %f\n",p[i].name,&p[i].ID,&p[i].exp,&p[i].sal);
    for(int i=0;i<n;i++)
    { if ((p[i].exp>=7)&&(p[i].sal<50000))
    {count++;}
    }
        printf("%d\n",count);
     for(int i=0;i<n;i++)
    { if ((p[i].exp>=7)&&(p[i].sal<50000))
    { printf("%d %s\n",p[i].ID,p[i].name);}
    }
    
  return 0;
}
