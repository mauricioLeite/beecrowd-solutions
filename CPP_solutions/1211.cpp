#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b);

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int count = 0, first_size;
		char aux[201];
		string above;
		vector<string> phone;
		for(int i = 0; i < n; i++){
			scanf("%s", aux);
			phone.push_back(aux);
		}
		sort(phone.begin(), phone.end(), compare);
		above = phone[0];
		first_size =  above.size();
		for(int i = 1; i < n; i++){
			for(int j = 0; j < first_size; j++){
				if(above[j] == phone[i][j])
					count++;
				else
					break;
			}
			above = phone[i];
		}
		printf("%d\n", count);
	}
	return 0;
}

bool compare(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] < b[i])
			return 1;
		if(a[i] > b[i])
			return 0;
	}
	return 1;
}