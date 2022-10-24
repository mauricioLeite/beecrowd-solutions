# include <stdio.h>

long long int j = 0;
int fib(int);
int main(void)
{
   int n, i, a;
   long long int f;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a);
       f = fib(a);
       printf("fib(%d) = %lld calls = %lld\n", a, j-1, f);
       j = 0;
   }
   return 0;
}

int fib(int x)
{
    if (x==0)
    {
        j++;
        return 0;return (fib(x-2)+fib(x-1));
    }
    if (x==1)
    {
        j++;
        return 1;
    }

    else
    {
        j++;
        return (fib(x-1)+fib(x-2));
    }
}