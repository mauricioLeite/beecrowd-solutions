# include <stdio.h>
# include <string.h>

int main ()
{
   int i, cont=0, aux=0;
   char n[110], d;
   while(1)
   {
       scanf (" %c %s", &d, n);
       if (d == '0' && n[0] == '0')
        break;
       else
       {
           for (i=0 ; i<strlen(n) ; i++)
           {
               if (n[i] != d)
               {
                    if (n[i] != '0')
                    {
                        aux++;
                    }
                    if (aux != 0)
                    {
                        printf ("%c", n[i]);
                        cont++;
                    }
               }
           }
       }
       if (cont == 0)
            printf ("0");
        printf ("\n");
        cont=0;
        aux=0;
   }
   return 0;
}