#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map <int, int> a;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        ++a[x];
    }
    for (int i = 0; i < m; ++i){
        int x;
        cin >> x;
        auto it = a.upper_bound(x);
        if (it == a.begin()){
            cout << "-1\n";
        } else {
            --it;
            cout << it->first << endl;
            --it->second;
            if (it->second == 0){
                a.erase(it);
            }
        }
    }
    return 0;
}