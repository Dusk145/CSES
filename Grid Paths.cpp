#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
#define mod 1000000007
 
using namespace std;

// TLE
// bool visited[1001][1001];
// int dx[2] = {0, 1};
// int dy[2] = {1, 0};
// ll cnt = 0;

// void dfs(int n, int i, int j){
//     if (i == n - 1 && j == n - 1 && visited[i][j]){
//         ++cnt;
//         return;
//     }
//     for (int k = 0; k < 2; ++k){
//         int x = i + dx[k];
//         int y = j + dy[k];
//         if (x >= 0 && y >= 0 && x < n && y < n && visited[i][j]){
//             dfs(n, x, y);
//         }
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     cin.ignore();
//     char a[n][n];
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < n; ++j){
//             cin >> a[i][j];
//             if (a[i][j] == '*'){
//                 visited[i][j] = false;
//             } else {
//                 visited[i][j] = true;
//             }
//         }
//         cin.ignore();
//     }
//     dfs(n, 0, 0);
//     cout << cnt << endl;
//     return 0;
// }

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