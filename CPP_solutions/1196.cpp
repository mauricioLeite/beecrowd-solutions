#include <bits/stdc++.h>
using namespace std;
#define mp make_pair

map<char, char> kb;

void initKb();

int main(){
	initKb();
	string line;
	while(getline(cin, line)){
		for(int i = 0; i < line.size(); i++){
			printf("%c", kb[line[i]]);
		}
		cout << endl;
	}
	return 0;
}

void initKb(){
	kb.insert(mp('1','`'));
	kb.insert(mp('2','1'));
	kb.insert(mp('3','2'));
	kb.insert(mp('4','3'));
	kb.insert(mp('5','4'));
	kb.insert(mp('6','5'));
	kb.insert(mp('7','6'));
	kb.insert(mp('8','7'));
	kb.insert(mp('9','8'));
	kb.insert(mp('0','9'));
	kb.insert(mp('-','0'));
	kb.insert(mp('=','-'));
	
	kb.insert(mp('W','Q'));
	kb.insert(mp('E','W'));
	kb.insert(mp('R','E'));
	kb.insert(mp('T','R'));
	kb.insert(mp('Y','T'));
	kb.insert(mp('U','Y'));
	kb.insert(mp('I','U'));
	kb.insert(mp('O','I'));
	kb.insert(mp('P','O'));
	kb.insert(mp('[','P'));
	kb.insert(mp(']','['));
	kb.insert(mp('\\',']'));

	kb.insert(mp('S','A'));
	kb.insert(mp('D','S'));
	kb.insert(mp('F','D'));
	kb.insert(mp('G','F'));
	kb.insert(mp('H','G'));
	kb.insert(mp('J','H'));
	kb.insert(mp('K','J'));
	kb.insert(mp('L','K'));
	kb.insert(mp(';','L'));
	kb.insert(mp('\'',';'));
	
	kb.insert(mp('X','Z'));
	kb.insert(mp('C','X'));
	kb.insert(mp('V','C'));
	kb.insert(mp('B','V'));
	kb.insert(mp('N','B'));
	kb.insert(mp('M','N'));
	kb.insert(mp(',','M'));
	kb.insert(mp('.',','));
	kb.insert(mp('/','.'));
	kb.insert(mp(' ',' '));
}