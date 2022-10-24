#include <bits/stdc++.h>
using namespace std;
#define NMAX 100001
typedef long long ll;

int compare(const void *a,const void *b);

int main(){
	int t, floors[NMAX];

	scanf("%d", &t);
	while(t--){
		ll n, c, m;
		cin >> n >> c >> m;
		for(ll i = 0; i < m; i++){
			scanf("%d", &floors[i]);
		}
		qsort(floors, m, sizeof(int), compare);
		ll result = 0;
		for(ll i = 0; i < m; i += c)
			result += floors[i] * 2;
		cout << result << endl;
	}
	return 0;
}

int compare(const void *a,const void *b){
	return (*(int*)b - * (int*)a );
}
