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
    ll a[n + 1] = {0};
    a[0] = 1;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= 6 && j <= i; ++j){
            a[i] = (a[i] + a[i - j]) % mod;
        }
    }
    cout << a[n] << endl;
    return 0;
}