#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
#define mod 1000000007
 
using namespace std;

// TLE
// string res(string a){
//     for (int i = a.length() - 1; i >= 0; --i){
//         if (a[i] == '0'){
//             a[i] = '1';
//             return a;
//         } else {
//             a[i] = '0';
//         }
//     }
//     return a;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     string a = "";
//     while (n){
//         a.insert(0, "0");
//         --n;
//     }
//     ull cnt = 1;
//     bool ok = true;
//     while (ok){
//         a = res(a);
//         ++cnt;
//         cnt %= mod;
//         bool check = true;
//         for (int i = 0; i < a.length(); ++i){
//             if (a[i] == '0'){
//                 check = false;
//                 break;
//             }
//         }
//         if (check){
//             ok = false;
//         }
//     }
//     cout << (ull)(cnt % mod) << endl;
//     return 0;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ull a[n + 1];
    a[1] = 2;
    for (int i = 2; i <= n; ++i){
        a[i] = a[i - 1] * 2;
        a[i] %= mod;
    }
    cout << a[n] << endl;
    return 0;
}