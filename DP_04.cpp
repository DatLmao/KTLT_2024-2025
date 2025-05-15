#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int sell = a[0];
	int maxsell = 0;
	for(int i = 1; i < n; i++){
		maxsell = max(maxsell, a[i] - sell);
		sell = min(a[i], sell);
	}
	cout << maxsell;
}