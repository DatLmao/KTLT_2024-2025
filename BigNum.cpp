#include <bits/stdc++.h>
using namespace std;

string divisor(string s, int b) { //Hàm chia string cho 1 số, có thể thay bằng số long long
    string t = ""; 
    long long num = 0; 
    int i = 0;
    while (i < s.size()) {
        num = num * 10 + (s[i] - '0'); 
        t += (num / b) + '0';          
        num %= b;                      
        i++;
    }

    while(t.size() > 1 && t[0] == '0') t.erase(0, 1);
    return t;
}

string sum(string s, string t){ //Hàm cộng 2 số lớn
  while(s.size()<t.size()){
    s.insert(s.begin(),'0');
  }

  while(s.size()>t.size()){
    t.insert(t.begin(), '0');
  }

  int sum,carry=0;
  string a=s;

  for(int i=a.size()-1; i>=0;i--){
    sum=(s[i]-'0') + (t[i]-'0') + carry;
    carry=sum/10;
    a[i]=sum%10 + '0';
  }
  
  if(carry==1){
    a='1'+a;
  }
  return a;
}

string multi(string s, string t){ //Hàm nhân 2 số lớn
	vector<int> a(s.size() + t.size(), 0);
	string b="";
	for(int i = s.size() - 1; i >= 0; i--){
		for(int j = t.size() - 1; j >= 0; j--){
			int sum = (s[i] - '0') * (t[j] - '0') + a[i + j + 1];
			a[i + j + 1] = sum%10;
			a[i + j] += sum/10;
		}
	}
	bool check = 1;
	for(int x : a){
		if(check && x == 0){
			continue;
		}
		check = false;
		b += (x + '0');
	}
	return b;
}

string diff(string s, string t){    //Hàm trừ 2 số lớn
	while(s.size() < t.size()) s = '0' + s;
	while(s.size() > t.size()) t = '0' + t;
	bool check = false;
	if(s < t){
		check = true;
		swap(s,t);
	}
	string x(s.size(),'0');
	int carry = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		int sub = (s[i] - '0') - (t[i] - '0') - carry;
		if(sub < 0){
			sub += 10;
			carry = 1;
		}
		else{
			carry = 0;
		}
		x[i] = sub%10 +'0';
	}
	while(x.size() > 1 && x[0] == '0'){
		x.erase(0,1);
	}
	if(check){
		x = '-' + x;
	}
	return x;
}

int remainder(string s, int b) { //chia lấy phần dư
    long long num = 0;
    for (int i = 0; i < s.size(); i++) {
        num = (num * 10 + (s[i] - '0')) % b;
    }
    return num;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << diff(s, t);
}