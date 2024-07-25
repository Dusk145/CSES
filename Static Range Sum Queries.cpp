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
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll pre[n + 1] = {0};
    for (int i = 1; i <= n; ++i){
        pre[i] = pre[i - 1] + a[i - 1];
    }
    for (int i = 0; i < q; ++i){
        int x, y;
        cin >> x >> y;
        cout << (ll)(pre[y] - pre[x - 1]) << endl;
    }
    return 0;
}