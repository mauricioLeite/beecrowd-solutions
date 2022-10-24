#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, vet[2001];
	for(int i = 0; i < 2001; i ++)
		vet[i] = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		vet[a]++;
	}
	for(int i = 0; i < 2001; i++){
		if(vet[i] != 0){
			printf("%d aparece %d vez(es)\n", i, vet[i]);
		}
	}
	return 0;
}