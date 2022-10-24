#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		deque<int> deck;
		for(int  i = 1; i <= n; i++){
			deck.push_back(i);
		}
		printf("Discarded cards: ");
		while(deck.size() > 1){
			if(deck.size() != 2)
				printf("%d, ", deck.front());
			else
				printf("%d\n", deck.front());
			deck.pop_front();
			deck.push_back(deck.front());
			deck.pop_front();
		}
		printf("Remaining card: %d\n", deck.front());
	}
	return 0;
}
