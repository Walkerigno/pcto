#include <stdio.h>

int main()
{
    int a; 
    int b;
    int c;
    scanf(" %d %d %d" ,&a ,&b ,&c);
    if ( a + b > c)
    {
        printf(" é un tringolo");
    }
    else if ( a + c > b )
    {
        printf(" é un tringolo");
    }
    else if ( b + c > a )
    {
        printf(" é un tringolo");
    }
    else 
    {
        printf(" non é un triangolo");
    }
    }