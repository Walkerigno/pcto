#include <stdio.h>

int main()
{
    int a[5] = {3,18,17,2,150};
    int b = 0;

    a[2] = 32;

printf("%d \n", a[4]);
while( b < 5 )
{
    printf("%d \n", a[b]);
    b = b + 1;
}
char f[5] = {'c','i','a','o','\0'};
int d = 0; 
while(f[d]!= '\0')
{
    printf("%c",f[d]);
    d = d + 1;
}
printf("\n");

}