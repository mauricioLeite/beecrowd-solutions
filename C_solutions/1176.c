#include <stdio.h>
 
int main() {
 
    
    long long int fib[100];
	long long int T,n,x,i;
	
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&T);
		fib[0]=0;
		fib[1]=1;
		for(i=2;i<=T;i++){
			fib[i]=fib[i-1]+fib[i-2];	
		}
		printf("Fib(%lld) = %lld\n",T,fib[T]);
	}
    return 0;
}