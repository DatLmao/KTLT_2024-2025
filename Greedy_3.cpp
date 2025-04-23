#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int truck = 1;
    int wgh = 0;
    for(int i = 0; i < n; i++){
    	if(wgh + a[i] > w){
    		truck++;
    		wgh = a[i];
		}
		else{
			wgh += a[i];
		}
	}
	cout<<truck;
}

