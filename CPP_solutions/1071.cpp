#include <bits/stdc++.h>
using namespace std;

int main()  
{  
    int a, b, c=0;  
    scanf("%d %d", &a, &b);  
    if(a == b)  
        printf("%d\n",c);  
    else
    { 
        if (a > b) swap(a,b);   
        for(a = a+1; a < b; a++)  
        {  
            if(a%2 == 1 || a%2 == -1)  
                c += a;  
        }  
        printf("%d\n", c);  
    }
    return 0;  
}  