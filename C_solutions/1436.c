# include <stdio.h>

int main(void)
{
   int n, a, i, j, v[10];
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a);
       for(j=0;j<a;j++)
           scanf("%d",&v[j]);
        printf("Case %d: %d\n",i,v[a/2]);
   }
   return 0;
}
