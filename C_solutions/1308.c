#include <stdio.h>
#include <math.h>

int main(){
    
    int n,i;
    long long int m;
    double delta, y;
    
    scanf("%d", &n);
    
    while(n--){
          scanf("%lld", &m);
          delta = 1 + 8*m;
          y = (-1 + sqrt(delta))/2;
          printf("%lld\n", (long long int)y);
    }
    
    return 0;
}