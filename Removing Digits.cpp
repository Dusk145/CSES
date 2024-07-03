#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ull unsigned long long
#define mod 1000000007
 
using namespace std;

int max_num(int n){
    int maxi = -1e9;
    while (n){
        if (n % 10 > maxi){
            maxi = n % 10;
        }
        n /= 10;
    }
    return maxi;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll dp[n + 1] = {0};
    for (int i = 1; i <= 9 && i <= n; ++i){
        dp[i] = 1;
    }
    for (int i = 10; i <= n; ++i){
        int temp = max_num(i);
        dp[i] += (dp[i - temp] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}