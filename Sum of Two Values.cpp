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
    map <ll, ll > b;
    vector <ll> c(n);
    for (ll i = 0; i < n; ++i){
        cin >> a[i];
        b[a[i]] = i + 1;
        c[i] = a[i];
    }
    sort(a, a + n);
    ll left = 0, right = n - 1;
    while (left < right){
        if (a[left] + a[right] > x){
            --right;
        } else if (a[left] + a[right] == x){
            break;
        } else {
            ++left;
        }
    }
    if (left == right){
        cout << "IMPOSSIBLE\n";
    } else if (a[left] == a[right]){
        auto it = find(c.begin(), c.end(), a[left]);
        cout << it - c.begin() + 1 << " ";
        it = find(it + 1, c.end(), a[left]);
        cout << it - c.begin() + 1 << endl;
    } else {
        auto it = b.find(a[left]);
        cout << it->second << " ";
        it = b.find(a[right]);
        cout << it->second << endl;
    }
    return 0;
}