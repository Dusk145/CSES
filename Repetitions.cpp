#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    getline(cin, a);
    int i = 0, maxi = - 1e9;
    while (i != a.length()){
        int cnt = 1;
        while (a[i + 1] == a[i]){
            ++cnt;
            ++i;
        }
        if (cnt > maxi){
            maxi = cnt;
        } else {
            ++i;
        }
    }
    cout << maxi << endl;
    return 0;
}
