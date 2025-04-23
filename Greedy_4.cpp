#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    

    vector<string> S(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> S[i];
    }
    
   
    vector<string> S_prime(m + 1);
    for (int i = 1; i <= m; ++i) {
        cin >> S_prime[i];
    }
    
   
    int i = 1, j = 1; 
    while (i <= n && j <= m) {
        if (S[i] == S_prime[j]) {
            ++j; 
        }
        ++i; 
    }
    
   
    if (j > m) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
    
    return 0;
}