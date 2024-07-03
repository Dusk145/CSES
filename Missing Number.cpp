#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    unsigned ll S = 0;
    for (int i = 0; i < n - 1; ++i){
        int x;
        cin >> x;
        S += x;
    }
    unsigned ll res = (n * (n + 1)) / 2;
    cout << (unsigned ll) (res - S) << endl;
    return 0;
}