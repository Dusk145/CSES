#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <char>> a(2000, vector <char> (2000));
int dx[4] = {- 1, 1, 0, 0};
int dy[4] = {0, 0, - 1, 1};
char dz[4] = {'U', 'D', 'L', 'R'};

struct value{
    int x, y, pre;
};

void bfs(int i, int j, int n, int m){
    queue <value> b;
    b.push({i, j, - 1});
    a[i][j] = '#';
    vector <vector <int>> dir(n, vector <int> (m));
    while (!b.empty()){
        value temp = b.front();
        b.pop();
        for (int k = 0; k < 4; ++k){
            int x = temp.x + dx[k];
            int y = temp.y + dy[k];
            if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] != '#'){
                dir[x][y] = k;
                if (a[x][y] == 'B'){
                    string res = "";
                    while (x != i || y != j){
                        int idx = dir[x][y];
                        res += dz[idx];
                        x -= dx[idx];
                        y -= dy[idx];
                    }
                    reverse(res.begin(), res.end());
                    cout << "YES\n" << res.length() << endl << res << endl;
                    return;
                }
                a[x][y] = '#';
                b.push({x, y, k});
            }
        }
    }
    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
            if (a[i][j] == 'A'){
                x = i;
                y = j;
            }
        }
    }
    bfs(x, y, n, m);
    return 0;
}