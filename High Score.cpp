#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> ok(3000, false);
vector <vector <pair <ll, ll>>> a(3000);

bool check(int x, int n){
    if (x == n){
        return true;
    }
    ok[x] = true;
    for (auto i : a[x]){
        if (!ok[i.first]){
            if (check(i.first, n)){
                return true;
            }
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
        ll x, y, z;
        cin >> x >> y >> z;
        a[x].push_back({y, z});
    }
    vector <ll> res(n + 1, - 1e18);
    res[1] = 0;
    bool has_positive_cycle_of_n = false;
    for (int i = 0; i < n; ++i){
        bool ok = false;
        for (int j = 1; j <= n; ++j){
            if (res[j] == - 1e18){
                continue;
            }
            for (auto k : a[j]){
                ll temp = k.first;
                ll cnt = k.second;
                if (res[temp] < res[j] + cnt){
                    res[temp] = res[j] + cnt;
                    ok = true;
                    if (i == n - 1 && check(temp, n)){
                        has_positive_cycle_of_n = true;
                    }
                }
            }
        }
        if (!ok){
            break;
        }
    }
    if (res[n] == - 1e18 || has_positive_cycle_of_n){
        cout << "-1\n";
    } else {
        cout << res[n] << endl;
    }
    return 0;
}