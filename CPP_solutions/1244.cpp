#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b);
vector<string> splitWord(string line);

int main(){
	int n;
	scanf("%d\n", &n);
	while(n--){
		vector<string> words;
		string line;
		getline(cin, line);
		words = splitWord(line);
		stable_sort(words.begin(),words.end(), compare);
		for(int i = 0 ; i < words.size(); i++){
			cout << words[i];
			if(i != words.size()-1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}

bool compare(string a, string b){
	return (a.length() > b.length());
}

vector<string> splitWord(string line){
	int size = line.size(), i = 0, j = 0;
	vector<string> words;
	while(i <= size){
		if(line[i]==' ' || line[i]=='\0'){
			words.push_back(line.substr(j, i-j));
			j = i + 1;
		}
		i++;
	}
	return words;
}	