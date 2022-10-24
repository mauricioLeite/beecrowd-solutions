# include <stdio.h>

int main(void)
{
   long long int n, i, m=0, j=0, a;
   while (1)
   {
       scanf ("%lld",&n);
       if (n==0)
            break;
       for(i=0;i<n;i++)
       {
            scanf("%lld",&a);
            if (a==0)
                m++;
            else
                j++;
       }
       printf("Mary won %lld times and John won %lld times\n",m,j);
       m=0;
       j=0;
   }
   return 0;
}