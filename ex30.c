#include <stdio.h>
double perimetro(double a, double b, double c)
{
    double perimetro;
    perimetro =  a + b + c;
    return perimetro;
}
double sqrt( double x)
{
    double a = 0.00001;
    if(x<0)
    {
        printf("error");

    }
    else if( x == 0 || x == 1)
    {
        return x;
    }
    else if(x > 0)
    {
        while ( x>= a * a)
        {
            a += 0.00001;
        }
        return a;
    }
    
}
double area(double a, double b, double c)
{
    double per_mezzo;
    double area;
    double area_finale;
    per_mezzo = perimetro(a, b, c)/2;
    area = per_mezzo * (per_mezzo - a) * (per_mezzo - b) * (per_mezzo - c);
    area_finale = sqrt(area);
    return area_finale;
}
int main()
{
    double l1;
    double l2;
    double l3;
    printf(" inserisci tre valori per i lati del triangolo \n");
    scanf(" %lf %lf %lf", &l1, &l2, &l3);
    double risultato_perimetro = perimetro( l1, l2, l3);
    double risultato_area = area( l1, l2, l3);
    printf(" il risultato del perimetro é %.15f \n" , risultato_perimetro);
    printf(" il risultato dell'area é %.15f \n" , risultato_area);
}