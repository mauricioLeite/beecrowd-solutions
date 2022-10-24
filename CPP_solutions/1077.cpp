#include <bits/stdc++.h>
using namespace std;

int Priority(char symbol, char top);
void InfixToPos(string expression);

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		string expression;
		cin >> expression;
		InfixToPos(expression);
	}
	return 0;
}

int Priority(char symbol, char top){
	int ps, pt;
	switch(symbol){
		case '^':
			ps = 4;
			break;
		case '*':
		case '/':
			ps = 2;
			break;
		case '+':
		case '-':
			ps = 1;
			break;
		case '(':
			ps = 4;
			break;
	}
	switch(top){
		case '^':
			pt = 3;
			break;
		case '*':
		case '/':
			pt = 2;
			break;
		case '+':
		case '-':
			pt = 1;
			break;
		case '(':
			pt = 0;
			break;
	}
	return (ps > pt);
}

void InfixToPos(string expression){
	stack<char> pilha;
	char symbol;
	pilha.push('(');
	for(int i = 0; i < expression.size(); i++){
		symbol = expression[i];
		if((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z') || (symbol >= '0' && symbol <= '9')){
			printf("%c", symbol);
		}
		else if(symbol == '('){
			pilha.push(symbol);
		}
		else if(symbol == ')'){
			while(pilha.top() != '('){
				printf("%c", pilha.top());
				pilha.pop();
			}
			pilha.pop();
		}
		else if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^'){
			while(1){
				if(Priority(symbol,pilha.top())){
					pilha.push(symbol);
					break;
				}
				else{
					printf("%c", pilha.top());
					pilha.pop();
				}
			}
		}
	}
	while(pilha.size() != 1){
		printf("%c", pilha.top());
		pilha.pop();
	}
	printf("\n");
}
