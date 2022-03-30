#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number1, number2, sum,sub,mul,div;
    
    
    scanf("%d %d", &number1, &number2);

    
    sum = number1 + number2; 
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;
    
    printf("%d", number1+number2, sum);
    printf("\n%d", number1-number2, sub);
    printf("\n%d", number1*number2, mul);
    printf("\n%d", number1/number2, div);
    
    return 0;
}
