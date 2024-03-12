#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf(" %d %d %d" ,&a ,&b ,&c );
    if ( (a == b && b!=c) || ( b == c && c!= a ) || (c == a && a!=b))
    {
printf("il triangolo é isoscele ");
    }
    else if ( a==b && b==c)
    {
        printf(" il triangolo é equilatero ");
    }
    else if ( a!= b && b!= c && c!= a )
    {
        printf("il triangolo é scaleno ");
    }
}