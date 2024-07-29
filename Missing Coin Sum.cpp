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
    ll a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    ll res = 1;
    for (int i = 0; i < n; ++i){
        if (a[i] > res){
            break;
        }
        res += a[i];
    }
    cout << res << endl;
    return 0;
}