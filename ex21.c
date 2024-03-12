#include <stdio.h>

int main()
{
    int numero = 1;
    int n_numeri = 0;
    int somma = 0;
    while(numero >= 0)
    {
        printf("inserisci un numero");
        scanf("%d" ,&numero);
        n_numeri = n_numeri + 1;
        somma = somma + numero;
        if( numero >= 0 )
        {
            printf("%f \n" ,(float)somma / n_numeri);
        }
    }
    

  
}