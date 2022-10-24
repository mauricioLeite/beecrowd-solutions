#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int L, C, x, y, quad[2][2];
    scanf("%d %d %d %d", &L, &C, &x, &y);
    if(C % 2 == 0)
    {
        quad[0][0] = 1; quad[0][1] = 0;
        quad[1][0] = 1; quad[1][1] = 0;
    }
    else
    {
        quad[0][0] = 1; quad[0][1] = 0;
        quad[1][0] = 0; quad[1][1] = 1;   
    }
    x = x%2;
    y = y%2;
    if(quad[x][y])
        printf("Direita\n");
    else
        printf("Esquerda\n");
    return 0;
}