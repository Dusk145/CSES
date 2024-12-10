#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <pair <int, int>> a;
    for (int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end(), cmp);
    ll cnt = 1, temp = a[0].second;
    for (int i = 1; i < n; ++i){
        if (a[i].first >= temp){
            ++cnt;
            temp = a[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}