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
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    ll S = 0;
    for (int i = 0; i < n - 1; ++i){
        S += a[i];
    }
    if (S > a[n - 1]){
        cout << S + a[n - 1] << endl;
    } else {
        cout << a[n - 1] * 2 << endl;
    }
    return 0;
}