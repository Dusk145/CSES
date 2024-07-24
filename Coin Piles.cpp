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
    int t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        if ((2 * a - b) % 3 == 0 && (2 * b - a) % 3 == 0 && 2 * a >= b && 2 * b >= a){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}