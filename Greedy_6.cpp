#include<bits/stdc++.h>
using namespace std;

struct player{
	int swim, ride, run;
};


bool cmp(player x, player y){
	return (x.ride + x.run) > (y.ride + y.run);
}

int main(){
	int n;
	cin >> n;
	vector<player> b(n);
	vector<int> time(n);
	for(int i = 0; i < n; i++){
		cin >> b[i].swim >> b[i].ride >> b[i].run;
	}
	sort(b.begin(), b.end(), cmp);
	int tongmax = b[0].swim + b[0].ride + b[0].run;
	for(int i = 0; i < n; i++){
		time[i] = b[i].swim + b[i].ride + b[i].run;
	}
	for(int i = 1; i < n; i++){
		b[i].swim += b[i-1].swim;
		time[i] = time[i] + b[i-1].swim;
	}
	cout<<time[n-1];
	
}

