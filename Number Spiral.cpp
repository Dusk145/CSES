#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ull x, y;
        cin >> y >> x;
        ull temp;
        if (y > x){
            if (y % 2 == 0){
                temp = y * y;
                temp -= (x - 1);
            } else {
                temp = (y - 1) * (y - 1) + 1;
                temp += (x - 1);
            }
        } else {
            if (x % 2 == 0){
                temp = (x - 1) * (x - 1) + 1;
                temp += (y - 1);
            } else {
                temp = x * x;
                temp -= (y - 1);
            }
        }
        cout << temp << endl;
    }
    return 0;
}