// 4 10
// 1 3 20 30
// 50 20 2 4

// 4 63    4
// 70 23   23

// 24 53   24
// 25 16   16

// 54 56   54
// 20 38   20


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ny(n), sf(n), dpny(n), dpsf(n);
    for(int i = 0; i < n; i++){
        cin >> ny[i];
    }
    for(int i = 0; i < n; i++){
        cin >> sf[i];
    }
    
    dpny[0] = ny[0];
    dpsf[0] = sf[0];

    for(int i = 1; i < n; i++){
        dpny[i] = min(dpny[i-1] + ny[i], dpsf[i-1] + ny[i] + m);
        dpsf[i] = min(dpsf[i-1] + sf[i], dpny[i-1] + sf[i] + m);
    }
    cout << min(dpny[n-1], dpsf[n-1]);
}