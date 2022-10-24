#include <bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define pb push_back

void dfs(int s);
void init();

int color[NMAX];
bool visited[NMAX], cycle;
vector<int> graph[NMAX];

int main(){
	int n;
	cin >> n;
	while(n--){
		int v, e;

		init();
		cin >> v >> e;
		while(e--){
			int x, y;
			cin >> x >> y;
			x--; y--;
			graph[x].pb(y);
		}
		for(int i = 0; i < v; i++){
			if(!visited[i])
				dfs(i);
		}
		if(cycle)
			printf("SIM\n");
		else
			printf("NAO\n");
	}
	return 0;	
}

void dfs(int s){
	visited[s] = true;
	color[s] = 1;
	for(int i = 0; i < graph[s].size(); i++){
		int y = graph[s][i];
		if(color[y] == 1)
			cycle = true;
		else if(color[y] == 0)
			dfs(y);
	}
	color[s] = 2;
}

void init(){
	cycle = false;
	memset(color,0,sizeof(color));
	memset(visited,false, sizeof(visited));
	for (int i = 0; i < NMAX; i++)
		graph[i].clear();
}