#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_ascii_line(char c,int no)
{
   
    for(int i=0;i<no;i++)
    {
        printf("%d\t",c);
    }
    printf("\n");
    
}

void print_char_line(char c,int no)
{
    if(c>='a'&&c<='z')
    {
    int index='z'-c;
    for(int i=0;i<=index;i++)
    {
        
        for(int j=0;j<no;j++)
        {
            printf("%c\t",c);
        }
        printf("\n");
        print_ascii_line(c,no);
        c++;
    }
    }
    else if(c>'A'&&c<'Z')
    {
    int index='Z'-c;
    for(int i=0;i<=index;i++)
    {
         
        for(int j=0;j<no;j++)
        {
            printf("%c\t",c);
        }
        printf("\n");
        print_ascii_line(c,no);
        c++;
    }
    }
    else{}
}

int main() 
{
    char c;
    int no;
    scanf("%c %d",&c,&no);
    print_char_line(c,no);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}