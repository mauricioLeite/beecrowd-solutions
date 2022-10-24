# include <stdio.h>

int main ()
{
   int x, i, f, j;
   unsigned long long int a, soma=0, qde;
   scanf ("%d", &x);
   for (i=0 ; i<x ; i++)
   {
       scanf ("%d", &f);
       for (j=0 ; j<f ; j++)
       {
           a = pow (2, j);
           soma+=a;
       }
       qde = soma / 12000;
       printf ("%lld kg\n", qde);
       soma=0;
   }
   return 0;
}
