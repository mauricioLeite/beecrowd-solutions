#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l, c, lines, ch;
	string w;
	while(scanf("%d %d %d", &n, &l, &c) != EOF){
		char w_aux[c];
		lines = 1;
		ch = 0;
		while(n--){
			scanf("%s", w_aux);
			w = w_aux;
			if(ch + w.length() <= c){
				ch += w.length() + 1;
			}
			else{
				ch = w.length() + 1;
				lines++;
			}
		}
		if(lines % l != 0){
			printf("%d\n", lines/l + 1);			
		}
		else{
			printf("%d\n", lines/l);
		}
	}
	return 0;
}
