#include <bits/stdc++.h>
using namespace std;

int awns[10];
int arr[9] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

void solve(int a);
void solve2(int b);

int main()
{
    int a, b;
    while(scanf("%d %d", &b, &a) && (a || b))
    {
        memset(awns, 0, 40);
        b--;
        solve(a);
        solve2(b);
        printf("%d", awns[0]);
        for(int i = 1; i < 10; i++)
            printf(" %d", awns[i]);
        printf("\n");
    }
    return 0;
}

void solve(int a)
{
    int aux, aux2, aux3;
    for(int i = 8; i >= 0; i--)
    {
        if(a >= arr[i]){
            aux = a / arr[i];
            aux2 = a % arr[i];
            aux3 = aux % 10;
            aux /= 10;
            for(int j = 0; j < aux3; j++)
                awns[j] += arr[i] * (aux + (j ? 1 : 0));
   
            awns[aux3] += arr[i] * (aux - (aux3 ? 0 : 1)) + aux2 + 1;
            for(int j = aux3+1; j < 10; j++)
                awns[j] += arr[i] * aux;
        }
    }
}

void solve2(int b)
{
    int aux, aux2, aux3;
   for(int i = 8; i >= 0; i--)
   {
        if(b >= arr[i]){
            aux = b / arr[i];
            aux2 = b % arr[i];
            aux3 = aux % 10;
            aux /= 10;
            for(int j = 0; j < aux3; j++)
                awns[j] -= arr[i] * (aux + (j ? 1 : 0));

            awns[aux3] -= arr[i] * (aux - (aux3 ? 0 : 1)) + aux2 + 1;
            for(int j = aux3+1; j < 10; j++)
                awns[j] -= arr[i] * aux;
        }
    }
}
