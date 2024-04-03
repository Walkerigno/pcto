#include <stdio.h>
#include <math.h>

double radice_quadrata(double numero, double tolleranza) 
{
    if (numero < 0) 
    {
        printf("Impossibile calcolare la radice quadrata di un numero negativo.\n");
        return -1;
    }
    
    if (numero == 0) 
    {
        return 0;
    }
    
    double radice = numero / 2; // Scelta iniziale arbitraria per la radice quadrata.
    while (1) 
    {
        double radice_successiva = (radice + numero / radice) / 2;
        if (fabs(radice_successiva - radice) < tolleranza) {
            break;
        }
        radice = radice_successiva;
    }
    
    return radice;
}

int main() {
    double numero;
    printf("Inserisci un numero di cui calcolare la radice quadrata: ");
    scanf("%lf", &numero);
    
    double risultato = radice_quadrata(numero, 1e-7);
    if (risultato != -1) 
    {
        printf("La radice quadrata di %.2lf è %.8lf\n", numero, risultato);
    }
    
    return 0;
}