#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ctoi(char c){
    return c-48;
}
bool dx(int n){
    string s = to_string(n);
    if (s.back()=='0') return false;
    int sz = s.size();
    int tong = 0;
    for (int i=0;i<sz/2;i++){
        if (s[i]!=s[sz-i-1]) return false;
        else tong += 2*ctoi(s[i]);
    }
    if (sz%2!=0) tong += ctoi(s[sz/2]);
    return tong%10==0;
}
map<int, bool> memo;
int sodep(int l, int r){
    if (r<55) return 0;
    else if (r==55) return 1;
    int cnt = 0;
    for (int i=l;i<=r;i++){
        if (memo.find(i)!=memo.end()){
            cnt++;
        }
        else{
            bool dep = dx(i);
            memo[i] = dep;
            if (dep==true) cnt++;
        }
    }
    return cnt;
}
int main(){
    int l, r;
  	int n = 0;
  	while (n<=10000){
      	cin >> l >> r;
      	if (l > r || l > 1e9 || r > 1e9 || abs(r-l) > 10000) break;
      	cout << sodep(l, r) << endl;
      	n++;
    }
    return 0;
}
