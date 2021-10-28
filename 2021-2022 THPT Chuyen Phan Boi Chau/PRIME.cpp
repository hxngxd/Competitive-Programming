#include <bits/stdc++.h>
#define long long long
using namespace std;
long divisors(long n){
	vector<int> div(1e6+1, 0);
	for (long i=1;i<=n;i++){
		for (long j=1;j*i<=n;j++){
			div[i*j]++;
		}
	}
	long tnguyento = 0;
	for (long i=1;i<=n;i++){
		if (div[i]==3){
			tnguyento++;
		}
	}
	return div[n];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
	long n;
	cin >> n;
	cout << divisors(n);
	return 0;
}
