#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
    ull S = 0;
    for (int i = 1; i < n; ++i){
        if (a[i] < a[i - 1]){
            S += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << S << endl;
    return 0;
}
