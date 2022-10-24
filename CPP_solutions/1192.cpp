#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a,b;
		char c;
		scanf("%d%c%d", &a, &c, &b);
		if(a == b){
			printf("%d\n", a*b);
		}
		else if(c >= 97 && c <= 122){
			printf("%d\n", a+b);
		}
		else{
			printf("%d\n", b-a);
		}
	}

	return 0;
}