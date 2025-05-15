// 11 5 = 11
// 6 10 = 10

// 12 10 = 12
// 30 11 = 30

// 22 40 = 40
// 50 22 = 50

// 4
// 10 1 1 10
// 5 1 20 20

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n+1), b(n+1), dpA(n+1), dpB(n+1);
	
	
	for(int i = 1; i <= n; i++)	cin >> a[i];
	for(int i = 1; i <= n; i++)	cin >> b[i];
	
	dpA[1] = a[1];
	dpB[1] = b[1];
	
	for(int i = 1; i <= n; i++){
		dpA[i] = max(dpA[i-1] + a[i], dpB[i-1]);
		dpB[i] = max(dpB[i-1] + b[i], dpA[i-1]);
	}
	
	cout << max(dpA[n], dpB[n]);
	
	
}
