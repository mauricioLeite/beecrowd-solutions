#include <stdio.h>

int main(){
	int n,i,menor,posi;
	scanf("%d",&n);
	int v[n];
	scanf("%d",&v[0]);
	menor=v[0];
	posi=0;
	for(i=1;i<n;i++){
		scanf("%d",&v[i]);
		if(v[i]<menor){
			menor=v[i];
			posi=i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n",menor,posi);
	return 0;
}