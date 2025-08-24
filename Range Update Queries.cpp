#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

ll n, q;
vector <ll> bit(200001);

void update(ll idx, ll x){
    for (ll i = idx; i <= n; i += i & (-i)){
        bit[i] += x;
    }
}

ll sum(ll idx){
    ll S = 0;
    for (ll i = idx; i >= 1; i -= i & (-i)){
        S += bit[i];
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
        update(i + 1, -a[i]);
    }
    while (q--){
        ll k, x, y, z;
        cin >> k;
        if (k == 1){
            cin >> x >> y >> z;
            update(x, z);
            update(y + 1, -z);
        } else {
            cin >> x;
            cout << sum(x) << endl;
        }
    }
    return 0;
}