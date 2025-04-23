#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, l, c;
	cin >> n >> l >> c;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	if(l <= c){
		cout << 0;
		return 0;
	}

    int dem = 0;
    int d = 0;
    int fuel = c;

    for(int i = 0; i < n - 1; i++){
        d = a[i+1] - a[i];
        
        if(fuel < d){
            fuel = c;
            dem++;
        }
        fuel -= d;
    }
    cout<<dem;
	
}



 
 
 
 
