#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	bool act;
	cin >> n;
	set<string> number;
	string in; 
	for(int i = 0; i < n; i++){
		cin >> in;
		act = false;
		for(int j = 0; j < in.size(); j++){
			if(act){
				if(in[j] != '@'){
					in.erase(j,1);
					j--;
				}
				else break;
			}else{
				if(in[j] == '@') break;
				else if(in[j] == '+'){
					act = true;
					in.erase(j,1);
					j--;
				}
				else if(in[j] == '.'){
					in.erase(j,1);
					j--;
				}
			}
		}
		number.insert(in);
	}
	cout << number.size() << endl;
	return 0;
}