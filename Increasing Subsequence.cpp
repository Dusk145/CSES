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
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    vector <int> dp;
    for (int i = 0; i < n; ++i){
        auto it = lower_bound(dp.begin(), dp.end(), a[i]);
        if (it == dp.end()){
            dp.push_back(a[i]);
        } else {
            *it = a[i];
        }
    }
    cout << dp.size() << endl;
    return 0;
}