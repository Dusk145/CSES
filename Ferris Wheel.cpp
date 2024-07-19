#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 0;
    ll left = 0, right = n - 1;
    while (left < right){
        if (a[left] + a[right] <= x){
            ++cnt;
            ++left;
            --right;
        } else {
            ++cnt;
            --right;
        }
    }
    if (left == right){
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}