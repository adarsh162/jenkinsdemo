#include <stdio.h>
void print_num(int num_to_convert,int base)
{   int base_power,current_digit; 
    for(base_power=1;num_to_convert/base_power!=0;base_power*=base);
   base_power/=base;
   while(base_power!=0)
   { current_digit=num_to_convert/base_power;
     num_to_convert%=base_power;
     base_power/=base;
     if(current_digit>9&&current_digit<16)
         printf("%c",current_digit-10+'A');
     else
         printf("%d",current_digit);
   }
 printf("\n");
    
   }
    

int main() {
    int input_num;
    scanf("%d",& input_num);
    if(input_num==0)
        printf("0\n0\n0");
    print_num(input_num,2);
    print_num(input_num,8);
    print_num(input_num,16);
    
    

     
    return 0;
}