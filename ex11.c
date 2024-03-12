#include <stdio.h>

int main()

{
    int a;
    int b;
    scanf(" %d %d" ,&a ,&b);
    if ( a % b == 0 )
    {
        printf(" a é multiplo di b ");

    }
    else 
    {
        printf(" a non é multiplo di b ");
    }
}