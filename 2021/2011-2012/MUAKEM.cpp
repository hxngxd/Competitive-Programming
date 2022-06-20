#include <bits/stdc++.h>
#define long long ll
using namespace std;
int comb(int n){
	return (n*(n-1)*(n-2))/6;
}
int main(){
    int n, m, dup=0;
    map<int, int> dups;
    cin >> n >> m;
	int a[m][2];
	vector<map<int, int>> v;
	for (int i=0;i<m;i++){
		cin >> a[i][0] >> a[i][1];
        for (int j=1;j<=n;j++){
            if (j != a[i][0] && j != a[i][1]){
                map<int, int> mp;
                mp[a[i][0]]++;
                mp[a[i][1]]++;
                mp[j]++;
                if (find(v.begin(), v.end(), mp) == v.end()){
                    v.push_back(mp);
                }
            }
        }
	}
	cout << comb(n) - v.size();
    return 0;
}
