#include <stdio.h>

int main() {
    float m,p,l,t;
    int n;
    scanf("%f",&m);
    scanf("%f",&p);
    scanf("%f",&l);
    scanf("%d",&n);
    scanf("%f",&t);
    int s=(n*t)-((l/m)*p);
    printf("%d",s);
    return 0;
}