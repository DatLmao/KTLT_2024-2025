#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100], dp[100] = {0};
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[0] = 0;
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if (abs(a[i] - a[j]) <= i - j)
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }
    cout << dp[n];
}
