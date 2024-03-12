#include <stdio.h>

int main ()

{
int a = 10;
int b;
scanf("%d" , &b);
if (b>a)
{
    printf("il numero é maggiore di 10 \n");
}
else if (b == 5)
{
    printf ("in numero é uguale a 5 \n");
}
else if ( b > 5)
{
    printf (" il numero é maggiore di 5 ");

}
else 
{
    printf(" il numero é minore di 5 ");
}
}