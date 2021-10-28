#include <bits/stdc++.h>
#define long long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("MAYMAN.INP", "r", stdin);
    freopen("MAYMAN.OUT", "w", stdout);
	long n;
	long m, p;
	cin >> n >> p;
	vector<pair<long, long>> v;
	for (long i=0;i<n;i++){
		cin >> m;
		v.push_back(make_pair(m, i));
	}
	sort(v.begin(), v.end());
	long l=0, r=1;
	long maxLen = 0, maxl=n, maxr=n;
	while (l<n && r<n){
        if (v[r].first - v[l].first >= p){
            for (long t=r;t<v.size();t++){
                if (v[t].second > v[l].second){
                    if (v[t].second - v[l].second >= maxLen && v[l].second <= maxl && v[t].second <=maxr){
                        maxLen = v[t].second - v[l].second;
                        maxl = v[l].second + 1;
                        maxr = v[t].second + 1;
                    }
                }
            }
            l++;
        }
        else{
            r++;
        }
	}
	if (maxl==maxr) cout << 0;
	else cout << maxl << " " << maxr;
    return 0;
}
