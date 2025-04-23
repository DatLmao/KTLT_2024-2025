#include<bits/stdc++.h>
using namespace std;

struct timeout{
	int J, F;
};

bool cmp(timeout a, timeout b){
	return a.F > b.F;
}

int main(){
	int n;
	cin >> n;
	vector<timeout> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].J >> a[i].F;
	}
	
	sort(a.begin(), a.end(), cmp);
	
	int sumj = a[0].J;
    int max1 = sumj + a[0].F;
	for(int i = 1; i < n; i++){
        sumj += a[i].J;
        max1 = max(max1, sumj + a[i].F);
    }
    cout<<max1;
	

}

