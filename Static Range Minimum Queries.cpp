#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <ll> a(200001), tree(4 * 200001);

void build(ll node, ll start, ll end){
    if (start == end){
        tree[node] = a[start];
        return;
    }
    ll mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

ll query(ll node, ll start, ll end, ll left, ll right){
    if (left > end || right < start){
        return 1e18;
    }
    if (left <= start && right >= end){
        return tree[node];
    }
    ll mid = (start + end) / 2;
    ll temp1 = query(2 * node, start, mid, left, right);
    ll temp2 = query(2 * node + 1, mid + 1, end, left, right);
    return min(temp1, temp2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> n >> q;
    a[0] = 1e18;
    for (ll i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--){
        ll x, y;
        cin >> x >> y;
        cout << query(1, 1, n, x, y) << endl;
    }
    return 0;
}