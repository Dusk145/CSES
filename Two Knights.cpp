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
    cout << "0\n";
    for (ll i = 2; i <= n; ++i){
        cout << (ull)((i * i) * (i * i - 1) / 2) - (ull)(4 * (i - 2) * (i - 1)) << endl;
    }
    return 0;
}
