#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> L(n), H(n);
	vector<int> dp(n);
	
	for(int i = 0; i < n; i++){
		cin >> L[i];
	}
	for(int i = 0; i < n; i++){
		cin >> H[i];
	}
	
	dp[0] = L[0];
	dp[1] = max(dp[0] + L[1], H[1]);
	
	for(int i = 2; i < n; i++){
		dp[i] = max({H[i] + dp[i-2], L[i] + dp[i-1], dp[i-1]});
	}
	
	cout << *max_element(dp.begin(), dp.end());
}