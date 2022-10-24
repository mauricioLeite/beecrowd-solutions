#include <bits/stdc++.h>
using namespace std;

int solve(int, int);

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <=n; i++){
		int r, k;
		cin >> r >> k;
		printf("Case %d: %d\n",i,solve(r,k));
	}
	return 0;
}

int solve(int n, int k){
	if(n == 1)
		return 1;
	return (k-1+solve(n-1,k))%n+1;
}