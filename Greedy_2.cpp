#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	long long budget = 0;
	sort(a.begin(), a.end(), greater<int>());
	
	for(int i = 0; i < n; i++){
		budget += 100*(pow(a[i],i+1));
	}
	cout<<budget;
	
}