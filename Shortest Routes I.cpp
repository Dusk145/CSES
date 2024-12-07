#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <pair <ll, ll>>> a(300000);

void dijikstra(ll x, ll n){
    vector <ll> b(n + 1, 1e18);
    b[x] = 0;
    priority_queue <pair <ll, ll>, vector <pair <ll, ll>>, greater <pair <ll, ll>>> c;
    c.push({0, x});
    while (!c.empty()){
        ll temp = c.top().second;
        ll cnt = c.top().first;
        c.pop();
        if (cnt > b[temp]){
            continue;
        }
        for (auto i : a[temp]){
            ll u = i.first;
            ll v = i.second;
            if (b[u] > b[temp] + v){
                b[u] = b[temp] + v;
                c.push({b[u], u});
            }
        }
    }
    for (ll i = 1; i <= n; ++i){
        cout << b[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; ++i){
        ll x, y, z;
        cin >> x >> y >> z;
        a[x].push_back({y, z});
    }
    dijikstra(1, n);
    return 0;
}