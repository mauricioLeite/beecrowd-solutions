#include <bits/stdc++.h>
using namespace std;

string createRL(string);
string toString(char);

int main(){
	string line;
	while(getline(cin,line)){
		int len;
		vector<string> result;
		string sequence;
		char comp;
		bool open = false;
		for(int i = 0; i < line.size(); i++){
			len = 1;
			comp = line[i];
			sequence = "";
			sequence += comp;
			while(line[++i] == comp){
				sequence += comp;
				len++;
			}
			i--;
			if(len == 1){
				if(!open){
					result.push_back("1");
					open = true;
				}
				result.push_back(toString(comp));
				if(comp == '1'){
					result.push_back("1");
				}
			}
			else{
				if(open){
					result.push_back("1");
					open = false;
				}
				result.push_back(createRL(sequence));
			}
		}
		if(open){
			result.push_back("1");
		}
		vector<string>::iterator it;
		for(it = result.begin(); it != result.end(); it++){
			cout << *it;
		}
		cout << endl;
	}
	return 0;
}

string createRL(string sequence){
	int size = sequence.size();
	string ret = "";
	while(size > 9){
		ret += "9";
		ret += sequence[0];
		size -= 9;
	}
	ret += ('0' + size);
	ret += sequence[0];
	if(size == 1){
		if(sequence[0] == '1')
			ret += "1";
		ret += "1";
	}
	
	return ret;
}

string toString(char c){
	stringstream ss;
	string s;
	if(c == ' ')
		s = " ";
	else{
		ss << c;
		ss >> s;
	}
	return s;
}
