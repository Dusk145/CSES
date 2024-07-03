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
    int n, x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    vector <ll> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= x; ++i){
        for (int j = 0; j < n; ++j){
            if (i >= a[j]){
                dp[i] = (dp[i] + dp[i - a[j]]) % mod;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}