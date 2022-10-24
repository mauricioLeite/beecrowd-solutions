#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define F first
#define S second

bool comp(pair<int,pi> const &x1, pair<int, pi> const &x2){
	return x1.F > x2.F;
}

vector< pair<int, pi>> toys;

int main(){
	int n, T, count = 1;	
	while(cin >> n >> T, n){
		int t, p, factor; 
		for(int i = 0; i < n; i++){
			cin >> t >> p;
			factor = (double)p/t;
			toys.pb(mp(factor, mp(t, p)));
		}
		sort(toys.begin(), toys.end(), comp);
		int total_p = 0, total_t = 0;
		int i = 0;
		while(i < n){
			int temp_t = total_t + toys[i].S.F;
			if(temp_t <= T){
				total_t = temp_t;
				total_p += toys[i].S.S;
			}
			else
				i++;
		}
		printf("Instancia %d\n", count++);
		printf("%d\n\n", total_p);
		toys.clear();
	}
	return 0;
}