#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
#define mod 1000000007
 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    vector <ll> a, b;
    for (int i = 0; i < n; ++i){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; ++i){
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    int idx1 = 0, idx2 = 0, cnt = 0;
    while (idx1 < n && idx2 < m){
        if (abs(a[idx1] - b[idx2]) <= k){
            ++cnt;
            ++idx1;
            ++idx2;
        } else {
            if (a[idx1] - b[idx2] < - k){
                ++idx1;
            } else if (b[idx2] - a[idx1] < - k){
                ++idx2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}