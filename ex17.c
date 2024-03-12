#include <stdio.h>

int main()
{
    int a;
    int b = 1969;
    scanf(" %d" ,&a );
    if (a > b )
    {
        printf(" sei nato dopo del 1969 e %d anni dopo \n" ,a - b );
    }
    else if ( a < b )
    {
        printf(" sei nato prima del 1969 e %d anni prima \n" ,b - a );
    }
    else if ( a == b )
    {
        printf(" sei nato lo stesso anno dello sbarco sulla luna ");
    }

}