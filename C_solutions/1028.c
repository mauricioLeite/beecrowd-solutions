#include<stdio.h>
int gcd(int a,int b)
{
 
    return b==0?a:gcd(b,a%b);
 
} 
int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
}