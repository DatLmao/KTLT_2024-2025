#include<bits/stdc++.h>
using namespace std;

int main(){
	int B, n, b;
	cin >> B >> n >> b;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int i = 0;
    int dem = 0;
    while(i < n){
        dem++;
        int location = a[i] + b;
        while(a[i] <= location){
            i++;
        }
        location = a[i-1] + b; 
        while(a[i] <= location){
            i++;
        }
    }
	
	cout<<dem;
}

