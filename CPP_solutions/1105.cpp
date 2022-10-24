#include <bits/stdc++.h>
using namespace std;

int main(){
	int b, n;
	while(cin >> b >> n, b || n){
		bool act = true;
		int d, c, v, money[b];
		for(int i = 0; i < b; i++)
			cin >> money[i];
		for(int i = 0; i < n; i++){
			cin >> d >> c >> v;
			d--; c--;
			money[d] -= v;
			money[c] += v;
		}
		for(int i = 0; i < b; i++)
			if(money[i] < 0){
				act = false;
				break;
			}

		(act)? printf("S\n") : printf("N\n");
	}
	return 0;
}