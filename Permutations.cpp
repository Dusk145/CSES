#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n == 3 || n == 2){
        cout << "NO SOLUTION\n";
    } else {
        for (int i = 2; i <= n; i += 2){
            cout << i << " ";
        } 
        for (int i = 1; i <= n; i += 2){
            cout << i << " ";
        }
    }
    return 0;
}
