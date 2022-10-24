#include <bits/stdc++.h>
using namespace std;

int main(){
	char temp[1001];
	string line;
	while(scanf("%s", temp) != EOF){
		line = temp;
		int right = 0, left = 0;
		for(int i = 0; i < line.size(); i++){
			if(line[i] == '(') left++;
			else if(line[i] == ')'){
				right++;
				if(left > 0){
					left--;
					right--;
				}
			}
		}
		if(left == 0 && right == 0) printf("correct\n");
		else printf("incorrect\n");
	}
	return 0;
}