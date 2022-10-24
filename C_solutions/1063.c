#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        if(n==0) break;
        char a[30], b[30], pilha[50];
        int i;
        for(i=0; i<n; i++){
            scanf(" %c", &a[i]);
        }
        for(i=0; i<n; i++){
            scanf(" %c", &b[i]);
        }
        int in=0, r=0, topo=-1;
        while(1){
            if(r==n) break;
            if(pilha[topo]!=b[r] && in==n){
                printf(" Impossible");
                break;
            }
            if(topo==-1){
                printf("I");
                topo++;
                pilha[topo]=a[in];
                in++;
            }
            else if(pilha[topo]==b[r]){
                printf("R");
                topo--;
                r++;
            }
            else{
                printf("I");
                topo++;
                pilha[topo]=a[in];
                in++;
            }
        }
        printf("\n");
    }
    return 0;
}