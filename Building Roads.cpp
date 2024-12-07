#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(300000);
vector <bool> ok(300000, true);
int temp;

void dfs(int x){
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    ll cnt = 0;
    vector <int> b;
    for (int i = 1; i <= n; ++i){
        if (ok[i]){
            ++cnt;
            b.push_back(i);
            dfs(i);
        }
    }
    cout << cnt - 1 << endl;
    for (int i = 0; i < b.size() - 1; ++i){
        cout << b[i] << " " << b[i + 1] << endl;
    }
    return 0;
}