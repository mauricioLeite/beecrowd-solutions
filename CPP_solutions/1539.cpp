#include <bits/stdc++.h>
using namespace std;
#define NMAX 102
#define INF 123112512.00
#define EPS 1e-9
#define pdi pair<double, int>

void Dijkstra(int s, int n);

int n;
double dist[NMAX];
vector<pdi > graph[NMAX];

int main(){
	int n;
	while(scanf("%d", &n), n){
		int x[n], y[n], r[n];
		for(int i = 0; i < n; i++)
			graph[i].clear();
		for (int i = 0 ; i < n ; ++i){
			scanf("%d %d %d", &x[i], &y[i], &r[i]);
		}
		for (int i = 0 ; i < n ; ++i){
			for (int j = 0 ; j < n; ++j){
				double distance = sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
				if (r[i] - distance > EPS)
					graph[i].push_back(make_pair(distance, j));
			}
		}
		int q, index1, index2;
		scanf("%d", &q);
		while (q--){
			scanf("%d %d", &index1, &index2);
			index1--, index2--;
			
			Dijkstra(index1, n);
			
			if (fabs(dist[index2] - INF) < EPS)
				printf("-1\n");
			else printf("%d\n", (int)(dist[index2]));
		}
	}
}

void Dijkstra(int s, int e){
	for (int i = 0 ; i < e ; ++i) 
		dist[i] = INF;
	
	dist[s] = 0;
	priority_queue<pair<double, int>, vector<pair<double, int> > , greater<pair<double, int> > > dj_q;
	dj_q.push(make_pair(0.0, s));
	
	while (!dj_q.empty()){
		pair<double, int> x = dj_q.top(); 
		dj_q.pop();
		int y = x.second;
		
		if (x.first - dist[y] > EPS) continue;
		for (int i = 0 ; i < graph[y].size(); ++i){
			int y2 = graph[y][i].second;
			if (dist[y2] - (dist[y] + graph[y][i].first) > EPS){
				dist[y2] = dist[y] + graph[y][i].first;
				dj_q.push(make_pair(dist[y2], y2));
			}
		}
	}
}