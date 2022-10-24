#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, h;
	while(scanf("%d %d", &h, &l), l || h){
		int vh[l];
		long long ret = 0;
		for (int i = 0; i < l; ++i)
			scanf("%d", &vh[i]);
		ret += h - vh[0];
		for (int i = 1; i < l; ++i){
			if(vh[i] < vh[i-1])
				ret += vh[i-1] - vh[i];
		}
		printf("%d\n", ret);
	}
	return 0;
}