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
    ull a[n + 1];
    a[1] = 2;
    for (int i = 2; i <= n; ++i){
        a[i] = a[i - 1] * 2;
        a[i] %= mod;
    }
    cout << a[n] << endl;
    return 0;
}
