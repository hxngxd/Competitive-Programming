#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool check(vector<int>& houses, vector<int>& heaters, int radius){
    vector<pair<int,int>> r;
    for (auto heater : heaters){
        r.push_back({heater - radius, heater + radius});
    }
    int cnt = 0;
    for (auto house : houses){
        int low = 0, high = heaters.size()-1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (r[mid].first <= house && house <= r[mid].second){
                cnt++;
                break;
            }
            else if (house < r[mid].first){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return cnt==houses.size();
}
int findRadius(vector<int> houses, vector<int> heaters){
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int low = 0, high = 1e9;
    while (low < high){
        int mid = low + (high - low)/2;
        if (check(houses, heaters, mid)){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    fast_io
    int n, m; cin >> n >> m;
    vector<int> houses(n), heaters(m);
    for (int i=0;i<n;i++) cin >> houses[i];
    for (int i=0;i<m;i++) cin >> heaters[i];
    cout << findRadius(houses, heaters);
    return 0;
}