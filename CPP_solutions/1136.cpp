#include <bits/stdc++.h>
using namespace std;

bool solve(const vector<int>& balls, int n);

int main() {
   	int n, b;
   	while(scanf("%d %d", &n, &b),n && b ){
    	vector<int> balls(b);
      	for(int i = 0; i < b; i++){
         	scanf("%d", &balls[i]);
      	}

      	sort(balls.begin(), balls.end());
		solve(balls, n) ? printf("Y\n") : printf("N\n");
   }
}

bool solve(const vector<int>& balls, int n){
   vector<bool> check(n+1);
   fill(check.begin(), check.end(), false);
   check[0] = true;
   for(int i = 0; i < balls.size(); i++){
      for(int j = 0; j < i; j++){
         check[balls[i] - balls[j]] = true;
      }
   }

   for(int i = 0; i < n + 1; ++i){
      if (!check[i]){
         return false;
      }
   }
   return true;
}