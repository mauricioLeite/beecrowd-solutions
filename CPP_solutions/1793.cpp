#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		int last, now, t = 0;
		for(int i = 0; i < n; i++){
			if(i == 0){
				cin >> last;
				t+=10;
			}
			else{
				cin >> now;
				if(last+10 > now){
					t+= now - last;
				}
				else
					t+=10;
				last = now;
			}
		}
		cout << t << endl;
	}
	return 0;
}