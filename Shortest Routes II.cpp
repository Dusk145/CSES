#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, t;
    cin >> n >> m >> t;
    vector <vector <ll>> a(n + 1, vector <ll> (n + 1, 1e18));
    for (ll i = 0; i < m; ++i){
        ll x, y, z;
        cin >> x >> y >> z;
        a[x][y] = a[y][x] = min(a[x][y], z);
    }
    for (ll i = 1; i <= n; ++i){
        a[i][i] = 0;
    }
    for (ll k = 1; k <= n; ++k){
        for (ll i = 1; i <= n; ++i){
            for (ll j = 1; j <= n; ++j){
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    while (t--){
        ll x, y;
        cin >> x >> y;
        cout << ((a[x][y] == 1e18) ? -1 : a[x][y]) << endl;
    }
    return 0;
}