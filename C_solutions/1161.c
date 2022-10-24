#include <stdio.h>
long long int fatorial(int n){
    long long int fat=1,i;
    if(n==0){
        return fat;
    }else {
        for(i=1;i<=n;i++)
            fat*=i;
    }
    return fat;
}


int main(){
    int N,M;
    while(scanf("%d %d",&N,&M) == 2 ){
        printf("%lld\n",fatorial(N)+fatorial(M));
    }
    return 0;
}
