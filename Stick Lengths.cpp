#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    ll temp = a[n / 2], res = 0;
    for (int i = 0; i < n; ++i){
        res += abs(a[i] - temp);
    }
    cout << res << endl;
    return 0;
}