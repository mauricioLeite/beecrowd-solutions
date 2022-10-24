#include <bits/stdc++.h>
using namespace std;
#define NMAX 51

bool perfect_square(int n);

int main(){
	int t;
	cin >> t;
	while(t--){
      	int n;
      	cin >> n;      
		int balls[NMAX], l_ball[NMAX], next = 1, rod = 0;
	   	while(1){
	    	bool flag = true;
	      	for(int i = 1; i <= rod; i++){
	        	if(perfect_square(l_ball[i] + next)){
	            	flag = false;
	            	l_ball[i] = next;
	         	}
	      	}
	   	   	if(flag){
	         	balls[rod] = next - 1;
	         	l_ball[++rod] = next;
	         	if(rod == n+1)
	         		break;
	      	}
	  	    next++;
	   	}
   		cout << balls[n] << '\n';
   	}
	return 0;
}

bool perfect_square(int n){
	return n == ((int)sqrt(n) * (int)sqrt(n));
}
