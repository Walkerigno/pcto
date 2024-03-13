#include <stdio.h>

int main()
{
    int a[5] = { 5, 7, 3, 1, 2,};
    int b = 0;
    int c = 1;
    int temp;
    int d = 1;
    int f = 0;
    while(d > 0)
    {
        d = 0;
        b = 0;
        c = 1;
        while(c < 5)
        {
            if(a[b] > a[c])
            {
                temp = a[b];
                a[b] = a[c];
                a[c] = temp;
                d = d + 1;
            }
            b = b + 1;
            c = c + 1;
        }
    
    }
    while(f<5)
    {
        printf("%d\n", a[f]);
        f=f+1;
    }

}