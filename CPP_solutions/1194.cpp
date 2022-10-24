#include <bits/stdc++.h>
using namespace std;

void tree_pos(string, string);

int main(){
	int n, v;
	string tree_pre, tree_in;
	cin >> n;
	while(n--){
		cin >> v >> tree_pre >> tree_in;
		tree_pos(tree_pre, tree_in);
		cout << endl;
	}
	return 0;
}

void tree_pos(string tree_pre, string tree_in){
	int root = tree_in.find(tree_pre[0]);
	if(tree_in.substr(0, root).length() > 0){
		tree_pos(tree_pre.substr(1), tree_in.substr(0, root));
	}
	if(tree_in.substr(root+1).length() > 0){
		tree_pos(tree_pre.substr(root+1), tree_in.substr(root+1));
	}
	cout << tree_pre[0];
}