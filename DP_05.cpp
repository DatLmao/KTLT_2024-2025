//1 2 3 4
//1 10 10 1
//1 2 4 8
//
//
//0 0 0 0 0
//
//
//i = 1
//dp[1] = 0
//des = min(1, 1) = 1
//dp[1] = max(0, 0 + 1) = 1
//
//i = 2
//dp[2] = 1
//des = min(10, 2) = 2
//dp[2] = max(1, 0 + 2) = 2
//des = min(10, 1) = 1
//dp2 = max(2, 1 + 1) = 2;
//
//i = 3
//dp3 = 2
//des = min(10, 4) = 4
//dp3 = max(2, 0 + 4) = 4
//des = min(10, 2) = 2
//dp3 = max(4, 1 + 2) = 4
//des = min(10, 1) = 1
//dp3 = max(4, 2 + 1) = 4
//
//
//i = 4
//dp4 = 4
//des = min(1, 8) = 1




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n+1), f(n+1), dp(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> x[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> f[i];
    }
    
    for(int i = 1; i <= n; i++){
    	dp[i] = dp[i-1];
    	for(int j = 0; j < i; j++){
    		int des = min(x[i], f[i-j]);
    		dp[i] = max(dp[i], dp[j] + des);
		}
	}
	cout << dp[n];
	
	
    
}