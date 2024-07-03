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
    set <ll> a;
    for (int i = 0; i < n; ++i){
        ll x;
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
    return 0;
}