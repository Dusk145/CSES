#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

ll n, q;
vector <ll> bit(200001);

void update(ll idx, ll x){
    for (ll i = idx; i <= n; i += i & (-i)){
        bit[i] ^= x;
    }
}

ll sum(ll idx){
    ll S = 0;
    for (ll i = idx; i > 0; i -= i & (-i)){
        S ^= bit[i];
    }
    return S;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    vector <ll> a(n + 1);
    for (ll i = 1; i <= n; ++i){
        cin >> a[i];
        update(i, a[i]);
    }
    while (q--){
        ll x, y;
        cin >> x >> y;
        cout << (sum(y) ^ sum(x - 1)) << endl;
    }
    return 0;
}