#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(300000);
ll res = 0, idx;

void bfs(int x, int n){
    queue <int> b;
    b.push(x);
    vector <ll> dis(n + 1, - 1);
    dis[x] = 0;
    while (!b.empty()){
        int temp = b.front();
        b.pop();
        for (auto i : a[temp]){
            if (dis[i] == - 1){
                dis[i] = dis[temp] + 1;
                b.push(i);
                if (dis[i] > res){
                    res = dis[i];
                    idx = i;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    bfs(1, n);
    bfs(idx, n);
    cout << res << endl;
    return 0;
}