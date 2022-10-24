# include <stdio.h>
# include <math.h>

int main ()
{
    long int j, i, a, b, n, cont=0;
    double d;
    scanf ("%ld", &n);
    for (i=0 ; i<n ; i++)
    {
        scanf ("%ld %ld", &a, &b);
        for (j=0 ; j<20 ; j++)
        {
            d = pow(10,j);
            if (a % (long int)d == b)
            {
                printf("encaixa\n");
                cont++;
                break;
            }
        }
        if (cont == 0)
            printf ("nao encaixa\n");
        cont=0;
    }
    return 0;
}
