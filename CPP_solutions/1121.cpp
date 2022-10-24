#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
char direction[4] = {'N', 'L', 'S', 'O'};
char field[101][101];

int main(){
    int n, m, s;
    while (cin >> n >> m >> s, n || m || s){
        string inst;
        int find, posj, posi, collected = 0, d;
        for (int i = 0; i < n; i++) {
            cin >> field[i];
            for (int j = 0; j < m; j++) {
                find = field[i][j];
                if (find == 'N' || find == 'O' || find == 'L' || find == 'S')
                    posi = i, posj = j;
            }
        }

        for (int i = 0; i < 4; i++)
            if (field[posi][posj] == direction[i]){
                d = i;
                i = 4;
            }

        cin >> inst;
        for (int i = 0; i < s; i++) {
            if (inst[i] == 'E') {
                d = (d + 3) % 4;
            }else if(inst[i] == 'D') {
                d = (d + 1) % 4;
            }else if (posi + dx[d] != n && posj + dy[d] != m && posi + dx[d] >= 0 && posj + dy[d] >= 0) {
                find = field[posi + dx[d]][posj + dy[d]];
                if (find != '#') {
                    field[posi][posj] = '.';
                    if(find == '*')
                        collected++;
                    posi += dx[d], posj += dy[d];
                }
            }
        }
        printf("%d\n", collected);
    }
    return 0;
}