#include<bits/stdc++.h>
using namespace std;

struct bitT{
	int B, T;
};

bool cmp(bitT a, bitT b){
	if(a.B == b.B){
		return a.T > b.T;
	}
	else{
		return a.B < b.B;
	}
}


bool check(vector<bitT> a, int n, int r){
	int sum = 0;
	int t = 0;
	for(int i = 0; i < n; i++){
		sum += a[i].B;
		t += a[i].T;
		if(sum > r*t){
			return 0;
		}
	}
	return 1;
	
}

int main(){
	int n, r;
	cin >> n >> r;
	vector<bitT> a(n);

	for(int i = 0; i < n; i++){
		cin >> a[i].B >> a[i].T;
		
	}
	sort(a.begin(), a.end(), cmp);
    
	if(check(a, n, r)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	
	
}