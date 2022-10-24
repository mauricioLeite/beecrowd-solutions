#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long x, y;
	while(cin >> x >> y, x || y){
		if(x == y)
			printf("0\n");
		else if(x^y != 0)
			cout << __builtin_popcountll(x^y) << endl;
	}
	return 0;
}