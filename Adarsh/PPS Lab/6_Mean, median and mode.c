#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,temp,count=0;
    float mean,x,sum=0;
    float arr[1000];
   
    for(i=0;1;i++)
    {   scanf("%f",& arr[i]); 
        if(arr[i]==-1)
        break;
       
      sum+=arr[i];
       count++;
       
      
    }
    for(i=0;i<count;i++)
    {for(j=0;j<count-i-1;j++)
    {  if(arr[j]>arr[j+1])
       {  temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
       }
    }
    }
    
        
    if (count%2==0)
    {x=(arr[(count/2)-1]+arr[(count/2)])/2;}
    else
    {x=arr[((count)/2)];}
    
    mean=sum/count;
    printf("%.2f ",mean);
    printf("%.2f ",x);
    int c[count],max=1;
    
    float mode=-1.00,t;
        for(i=0;i<count;i++){
        t=arr[i];
            c[i]=0;
        for(int j=i;j<count;j++){
            if(t==arr[j])
                c[i]++;
        }
        }
    for(i=0;i<count;i++){
        if(c[i]>=max){
          if(c[i]==max)
          {mode=-1.00;}
            else
            {max=c[i];
             mode=arr[i];
            }
        }
    }
    printf("%.2f",mode);
    
            
        
        
    return 0;
}
