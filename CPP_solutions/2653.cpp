#include <bits/stdc++.h>
using namespace std;

int main(){
	set<string> conj;
	string line;
	while(getline(cin,line)){
		conj.insert(line);
	}
	printf("%d\n", conj.size());
	return 0;
}
