#include <bits/stdc++.h>
using namespace std;
#define NMAX 1001

int cmp(const void* a, const void* b);

int main(){
	int n, k;	
	while(scanf("%d %d", &n, &k) != EOF){
		int pos[NMAX], dist[NMAX],  groups_sum;
		pos[0] = 0;
		dist[0] = 0;
		for(int i = 1; i < n; i++){
			cin >> pos[i];
			dist[i] = pos[i] - pos[i-1];
		}
		qsort(dist, n, sizeof(int), cmp);
		groups_sum = 0;
		for(int i = k - 1; i < n; i++){
			groups_sum += dist[i];
		}
		cout << groups_sum << endl;
	}
	return 0;
}

int cmp(const void* a, const void* b){
	return (*(int*)b - *(int*)a);
}