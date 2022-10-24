#include <bits/stdc++.h>
using namespace std;
#define NINF -0x3F3F3F
#define NMAX 101
#define WMAX 1001

int p, v[NMAX], w[NMAX], dp[NMAX][WMAX];
int solve(int x, int pos);

int main (){
	int n, count = 1;
	cin >> n;
	while(n--){
		int w_g;
		cin >> p >> w_g;
		for (int i = 0; i < p; i++)
			cin >> v[i] >> w[i];
		memset(dp, -1, sizeof dp);
		printf("Galho %d:\nNumero total de enfeites: %d\n\n", count++, solve (0, w_g));
	}
	return 0;
}

int solve(int x, int pos){
	if(pos < 0) 
		return NINF;
	if(x == p) 
		return 0;
	return max(v[x] + solve (x + 1, pos - w[x]), solve (x + 1, pos));
}