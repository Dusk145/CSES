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
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i = 5; i <= n; i += 5){
        ll temp = i;
        while (temp % 5 == 0){
            ++cnt;
            temp /= 5;
        }
    }
    cout << cnt << endl;
    return 0;
}