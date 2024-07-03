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
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll dp[x + 1] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; ++i){
        for (int j = a[i]; j <= x; ++j){
            dp[j] = (dp[j] + dp[j - a[i]]) % mod;
        }
    }
    cout << dp[x] << endl;
    return 0;
}