#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n;
    cin >> n;
    while (n != 1){
        cout << n << " ";
        if (n % 2 == 0){
            n /= 2;
        } else {
            n *= 3;
            ++n;
        }
    }
    cout << n << endl;
    return 0;
}
