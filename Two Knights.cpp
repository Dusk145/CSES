#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
 
using namespace std;

// TLE
// int dx[4] = {1, 2, 2, 1};
// int dy[4] = {- 2, - 1, 1, 2};
 
// ull res(int n, int i, int j){
//     bool a[n][n];
//     for (int x = 0; x < n; ++x){
//         for (int y = 0; y < n; ++y){
//             a[x][y] = true;
//         }
//     }
//     for (int k = 0; k < 4; ++k){
//         int x = i + dx[k];
//         int y = j + dy[k];
//         if (a[x][y] && x < n && y < n && y >= 0){
//             a[x][y] = false;
//         }
//     }
//     ull cnt = n - j - 1;
//     for (int x = i + 1; x < n; ++x){
//         for (int y = 0; y < n; ++y){
//             if (a[x][y]){
//                ++cnt;
//             }
//         }
//     }
//     return cnt;
// }
 
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     cout << "0\n";
//     for (int i = 2; i <= n; ++i){
//         ull cnt = 0;
//         for (int j = 0; j < i; ++j){
//             for (int k = 0; k < i; ++k){
//                 cnt += res(i, j, k);
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << "0\n";
    for (ll i = 2; i <= n; ++i){
        cout << (ull)((i * i) * (i * i - 1) / 2) - (ull)(4 * (i - 2) * (i - 1)) << endl;
    }
    return 0;
}