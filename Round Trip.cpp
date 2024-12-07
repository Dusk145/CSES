#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(300000);
vector <bool> ok(300000, true);
vector <int> res;
int temp;

bool dfs(int x, int par){
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            res.push_back(i);
            if (dfs(i, x)){
                return true;
            }
            res.pop_back();
        } else if (i != par){
            temp = i;
            return true;
        }
    }
    return false;
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
    for (int i = 1; i <= n; ++i){
        res.push_back(i);
        if (ok[i] && dfs(i, 0)){
            int idx = 0;
            while (res[idx] != temp){
                ++idx;
            }
            cout << res.size() - idx + 1 << endl;
            for (int i = idx; i < res.size(); ++i){
                cout << res[i] << " ";
            }
            cout << temp << endl;
            return 0;
        }
        res.clear();
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}