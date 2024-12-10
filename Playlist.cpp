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
    vector <int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    map <int, int> b;
    int start = 0, maxi = 0;
    for (int end = 0; end < n; ++end){
        if (b.find(a[end]) == b.end()){
            b[a[end]] = end;
        } else {
            if (b[a[end]] >= start){
                start = b[a[end]] + 1;
            }
            b[a[end]] = end;
        }
        maxi = max(maxi, end - start + 1);
    }
    cout << maxi << endl;
    return 0;
}