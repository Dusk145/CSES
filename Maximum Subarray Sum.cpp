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
    ll S = 0, maxi = - 1e9;
    for (int i = 0; i < n; ++i){
        ll x;
        cin >> x;
        S += x;
        if (S > maxi){
            maxi = S;
        }
        if (S < 0){
            S = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}