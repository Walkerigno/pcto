#include <stdio.h>

int main()
{
    int a; 
    printf(" Dammi un numero qualsiasi ");
    scanf(" %d" ,&a);
    int b = a - 1;
    int c = 0;
    while( b > 1)
    {
       if(a % b == 0)
       {
        c = c + 1;
       }
    b--;
    }
    if (c==0)
    {
        printf(" il numero é primo");
    }
    else 
    {
    printf("non é primo ");
    }

}