#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		if (n >= 90 && n < 180)
			printf("Boa Tarde!!\n");
		else if(n >= 180 && n < 270)
			printf("Boa Noite!!\n");
		else if(n >= 270 && n < 360)
			printf("De Madrugada!!\n");
		else if(( n >= 0 && n < 90) || n == 360)
			printf("Bom Dia!!\n");
	}
	return 0;
}