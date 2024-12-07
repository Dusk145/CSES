#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(300000);
vector <int> res(300000, 0);

bool bfs(int x){
    queue <int> b;
    b.push(x);
    res[x] = 1;
    while (!b.empty()){
        int temp = b.front();
        b.pop();
        for (auto i : a[temp]){
            if (res[i] == 0){
                res[i] = (res[temp] == 1) ? 2 : 1;
                b.push(i);
            } else {
                if (res[i] == res[temp]){
                    return false;
                }
            }
        }
    }
    return true;
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
        if (res[i] == 0 && !bfs(i)){
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }
    for (int i = 1; i <= n; ++i){
        cout << res[i] << " ";
    }
    return 0;
}