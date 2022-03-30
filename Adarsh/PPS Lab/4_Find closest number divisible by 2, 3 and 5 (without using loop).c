#include <stdio.h>

int main() {

 int x,y,z,a,d1,d2;
    scanf("%d",& x);
    y=x/30;
    z=y*30;
    a=30*(y+1);
    d1=(x-z);
    d2=(a-x);
    
   
    if((x*30)>=0)
    {
       if(d1>d2)
       {printf("%d",a);}
       if(d1==d2){
            printf("%d",z);}
        
        if(d2>d1)
        {printf("%d",z);}
    
      
    }
    
        
    return 0;
}