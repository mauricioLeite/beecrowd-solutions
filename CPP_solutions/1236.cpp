#include <bits/stdc++.h>
using namespace std;


string get(string line);
void compress(string line);

int main(){
	int n;
	string line;
	scanf("%d\n", &n);
	while(n--){
		getline(cin,line);
		compress(line);
	}
	return 0;
}

string get(string line){
	int size = line.size();
	string res = "", c = (line[0] == ' ') ? "$" : "#";

	if(size >= 3){
		while(size > 255){
			res += c + char(255);
			size -= 255;
		}
		res += c + char(size);
	}
	else{
		for(int i = 0; i < size; i++){
			res += line[0];
		}
	}
	return res;
}

void compress(string line){
	string temp = "";
	int i = 0;
	while(line[i] != '\0'){
		char c = line[i];
		if(c == ' ' || c == '0'){
			while(line[i] == c){
				temp += line[i];
				i++;
			}
			cout << get(temp);
			i--;
			temp = "";
		}
		else{
			cout << c;
		}
		i++;
	}
	cout << endl;
}