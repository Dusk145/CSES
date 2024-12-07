#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <ll>> a(300000);
vector <ll> b(300000, 0);

ll dfs(int x){
    int cnt = 0;
    for (auto i : a[x]){
        cnt += 1 + dfs(i);
    }
    b[x] = cnt;
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 2; i <= n; ++i){
        ll x;
        cin >> x;
        a[x].push_back(i);
    }
    dfs(1);
    for (ll i = 1; i <= n; ++i){
        cout << b[i] << " ";
    }
    return 0;
}