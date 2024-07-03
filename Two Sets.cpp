#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ull S = (n * (n + 1)) / 2;
    if (S % 2 == 0){
        vector <int> a;
        vector <bool> ok(n, true);
        ull cnt = n, res = 0;
        while (res < S / 2){
            ull temp = (S / 2) - res;
            if (temp > cnt){
                a.push_back(cnt);
                res += cnt;
                --cnt;
                ok[cnt] = false;
            } else {
                a.push_back(temp);
                ok[temp - 1] = false;
                res = S / 2;
            }
        }
        cout << "YES\n" << a.size() << endl;
        for (ll i = 0; i < a.size(); ++i){
            cout << a[i] << " ";
        }
        cout << endl << n - a.size() << endl;
        for (ll i = 0; i < n; ++i){
            if (ok[i]){
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    } else {
        cout << "NO\n";
    }
    return 0;
}