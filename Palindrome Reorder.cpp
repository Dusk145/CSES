#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    getline(cin, a);
    map <char, int> b;
    for (int i = 0; i < a.length(); ++i){
        ++b[a[i]];
    }
    int cnt = 0;
    for (auto x : b){
        if (x.second == 1 || x.second % 2 != 0){
            ++cnt;
        } 
    }
    if (cnt > 1){
        cout << "NO SOLUTION\n";
    } else {
        string res = "", temp = "";
        for (auto x : b){
            int check = x.second / 2;
            if (check == 0){
                temp.push_back(x.first);
                continue;
            } else if (x.second % 2 != 0){
                temp.push_back(x.first);
            }
            while (check){
                res.push_back(x.first);
                --check;
            }
        }
        cout << res << temp;
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}