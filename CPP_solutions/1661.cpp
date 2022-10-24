#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		int wines[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &wines[i]);
		}
		long long ac = 0, ret = 0;
		for(int i = 0; i < n; i++){
			ac += wines[i];
			ret += llabs(ac);
		}
		cout << ret << endl;
	}
	return 0;
}
