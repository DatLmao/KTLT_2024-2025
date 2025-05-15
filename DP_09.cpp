#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r, c;
    cin >> n;
    int dp[100] = {0};
    int a[100];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = 10000;
    }
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i <= n; i++){
        for (int j = 0; j < i; j++){
            dp[i] = min(dp[i], dp[j] + a[i] + ((i - j - 1) * (i - j)) / 2);
        }
    }

    cout << dp[n];

}