#include <stdio.h>

int main() {
    int x=0,y=0,z=0;
    char ch;
   
    while((ch=getchar())!=EOF)
    {  
      
      if(ch=='\t')
        y++;
        
      if(ch=='\n')
        z++;
      if(ch==' ')
        x++;
    }
    printf("%d %d %d",x,y,z);
       
     
     
    
    
    return 0;
}