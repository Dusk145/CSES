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
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int maxi = 0, temp = 0;
    int i = 0, j = 0;
    while (i < n && j < n){
        if (a[i] < b[j]){
            ++temp;
            ++i;
        } else {
            --temp;
            ++j;
        }
        maxi = max(temp, maxi);
    }
    cout << maxi << endl;
    return 0;
}