#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string a, temp = "";
set <string> b;
vector <bool> ok(10, true);

void res(int end){
    for (int i = 0; i < end; ++i){
        if (ok[i]){
            ok[i] = false;
            temp += a[i];
            if (temp.size() == a.size()){
                b.insert(temp);
            } else {
                res(end);
            }
            temp.pop_back();
            ok[i] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a;
    sort(a.begin(), a.end());
    res(a.length());
    cout << b.size() << endl;
    for (auto x : b){
        cout << x << endl;
    }
    return 0;
}