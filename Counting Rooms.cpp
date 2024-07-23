#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long

using namespace std;

vector <vector <bool>> ok(1001, vector <bool> (1001, true));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};

void dfs(int i, int j, int n, int m){
    ok[i][j] = true;
    for (int k = 0; k < 4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && !ok[x][y]){
            dfs(x, y, n, m);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    cin.ignore();
    char a[n][m];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
            if (a[i][j] == '.'){
                ok[i][j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (!ok[i][j]){
                ++cnt;
                dfs(i, j, n, m);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}