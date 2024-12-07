#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string temp(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            a[i] = '1';
            return a;
        } else {
            a[i] = '0';
        }
    }
    return a;
}

string res(string a){
    string b = string(1, a[0]);
    for (int i = 1; i < a.length(); ++i){
        if (a[i] == a[i - 1]){
            b += "0";
        } else {
            b += "1";
        }
    }
    return b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string a = string(n, '0');
    for (ll i = 0; i < (ll)pow(2, n); ++i){
        cout << res(a) << endl;
        a = temp(a);
    }
    return 0;
}