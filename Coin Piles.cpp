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
        if (a < b){
            swap(a, b);
        }
        b -= (a / 2);
        if (b < 0){
            cout << "NO\n";
        } else if (b == 0 && a % 2 == 0){
            cout << "YES\n";
        } else {
            if (b == 2){
                cout << "YES\n"; 
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}