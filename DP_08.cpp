#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, r, c;
	cin >> n >> r >> c;
	vector<int> a(n + 1), dp(n+1);
	dp[0] = 0;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
		dp[i] = dp[i-1] + a[i] * r;
		if(i >= 4){
			dp[i] = min(dp[i], dp[i-4] + c*4);
		}
        else{
            dp[i] = min(dp[i], 4*c);
        }
	}
	
	cout << dp[n];
}