#include <bits/stdc++.h>
using namespace std;
  
int main()  
{  
    int a,b,c,d;  
    scanf("%d%d", &a, &b);  
    if( a > b) swap(a,b);
    for(c = a+1; c < b; c++){  
        if(c%5 == 2 || c%5 == 3)  
            printf("%d\n",c);  
    }  
    return 0;  
}