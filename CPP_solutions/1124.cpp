#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, c, r1, r2;
	while(scanf("%d %d %d %d", &l, &c, &r1, &r2), l || c || r1 || r2){
		int total = r1+r2;
		int maior_r, menor_l;
		if(r1 > r2)
			maior_r = r1;
		else
			maior_r = r2;
		if(l > c)
			menor_l = c;
		else
			menor_l = l;

		if((2*maior_r <= menor_l) && (total*total <= (l-total)*(l-total)+(c-total)*(c-total)))
			printf("S\n");
		else 
			printf("N\n");
	}
	return 0;
}