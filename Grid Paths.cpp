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
    int n;
    cin >> n;
    cin.ignore();
    char a[n][n];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    ull dp[n][n] = {};
    for (int i = 0; i < n; ++i){
        if (a[0][i] != '*'){
            dp[0][i] = 1;
        } else {
            break;
        }
    }
    for (int i = 0; i < n; ++i){
        if (a[i][0] != '*'){
            dp[i][0] = 1;
        } else {
            break;
        }
    }
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < n; ++j){
            if (a[i][j] != '*'){
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            }
        }
    }
    cout << dp[n - 1][n - 1] << endl;
    return 0;
}
