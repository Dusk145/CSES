#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    queue <int> a;
    for (int i = 1; i <= n; ++i){
        a.push(i);
    }
    vector <int> res;
    while (!a.empty()){
        a.push(a.front());
        a.pop();
        res.push_back(a.front());
        a.pop();
    }
    for (int i = 0; i < n; ++i){
        cout << res[i] << " ";
    }
    return 0;
}