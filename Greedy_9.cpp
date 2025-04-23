#include<bits/stdc++.h>
using namespace std;

struct job{
	int w, c;
};

bool cmp(job a, job b){
	return a.w * b.c > b.w * a.c;
}

int main(){
	int n;
	cin >> n;
	vector<job> a(n);
	for(int i = 0 ; i < n; i++){
		cin >> a[i].w >>a[i].c;
	}
	sort(a.begin(), a.end(), cmp);


	int t = a[0].c;
	int wei = a[0].c * a[0].w;
	for(int i = 1; i < n; i++){
		t += a[i].c;
		wei += a[i].w * t;
		
	}
	cout<<wei;
}