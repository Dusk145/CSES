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
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }
    ll dp[x + 1] = {0}; 
    for (int i = 0; i < n; ++i){
        for (int j = x; j >= 1; --j){
            if (j >= a[i]){
                dp[j] = max(dp[j], b[i] + dp[j - a[i]]);
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}