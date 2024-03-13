#include <stdio.h>

int main ()
{
    char parola[25];
    scanf("%[^\n]s" ,parola);
    printf("%s \n" ,parola);
}