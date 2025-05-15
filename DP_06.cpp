#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[100] = {0};
    int a[100], f[100] = {0};
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> f[i];

    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        dp[i] = dp[i - 1] + min(a[i], f[i]);
        for (int j = 1; j <= i; j++){
            int s = 0;
            for (int k = j; k <= i; k++){
                s += min(a[k], f[k - j + 1]);
            }
            if (j > 1)
                s += dp[j - 2];
            dp[i] = max(s, dp[i]);
        }
    }

    cout << dp[n];
}