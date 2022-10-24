#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mk make_pair
#define NMAX 200001

int find_k(int);
void union_k(int, int);
void kruskal(int, int);

int parent[NMAX], rnk[NMAX];
vector< pair <int, pair <int, int> > > graph;
long int total;


int main(){
	int v, e;
	while(cin >> v >> e, v || e){
		int x, y, w;
		total = 0;
		for(int i = 0; i < e; i++){
			cin >> x >> y >> w;
			graph.pb(mk(w,mk(x,y)));
			graph.pb(mk(w,mk(y,x)));
			total += w;
		}
		sort(graph.begin(), graph.end());
		kruskal(v, e);
		cout << total << endl;
		graph.clear();
	}
	return 0;
}

int find_k(int v){
	if(parent[v] == v)
		return v;
	else
		return (parent[v] = find_k(parent[v]));
}

void union_k(int x, int y){
	int xroot = find_k(x);
	int yroot = find_k(y);
	if(rnk[xroot] < rnk[yroot]){
		parent[xroot] = yroot;
		rnk[yroot] += rnk[yroot];
	}
	else{
		parent[yroot] = xroot;
		rnk[xroot] += rnk[yroot];
	}
}

void kruskal(int V, int E){
	int e = 0;
	for (int i = 0; i <= V; i++){
		parent[i] = i;
		rnk[i] = 1;
	}
	for(int i = 0; i < graph.size(); i++){
		int y = find_k(graph[i].S.F);
		int x = find_k(graph[i].S.S);
		if( x != y){
			union_k(x, y);
			total -= graph[i].F;
			e++;
		}
	}
}