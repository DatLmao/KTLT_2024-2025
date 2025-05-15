#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> C(n);
    for (int i = 0; i < n; i++) cin >> C[i];
    vector<int> dp(n + 1, 1e9);
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--){
        int sum = 0;
        for (int j = i; j <= n - 1; j++){
            sum += C[j];
            int space = j - i;
            if (sum + space > l){
                break;
            }
            int trong = l - (sum + space);
            int dochung = trong * trong + dp[j + 1];
            dp[i] = min(dp[i], dochung);
        }
    }
    cout << dp[0];
    return 0;
}