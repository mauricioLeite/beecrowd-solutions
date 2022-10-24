#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		double xo, yo, x, y;
		scanf("%lf %lf",&xo,&yo);
		while(n--){
			scanf("%lf %lf", &x, &y);
			if(x-xo == 0 && y-yo == 0) printf("divisa\n");
			if(x-xo == 0 && y-yo != 0) printf("divisa\n");
			if(x-xo != 0 && y-yo == 0) printf("divisa\n");
			if(x-xo > 0 && y-yo > 0) printf("NE\n");
			if(x-xo < 0 && y-yo > 0) printf("NO\n");
			if(x-xo < 0 && y-yo < 0) printf("SO\n");
			if(x-xo > 0 && y-yo < 0) printf("SE\n");			
		}
	}
	return 0;
}
