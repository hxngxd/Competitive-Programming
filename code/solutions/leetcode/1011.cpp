//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
class Solution {
public:
    bool canShip(vector<int>& weights, int days, int cap){
        int current_w = 0;
        for (auto i : weights){
            if (current_w + i <= cap){
                current_w += i;
            }
            else{
                current_w = i;
                days--;
            }
        }
        return days >= 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for (auto i : weights){
            low = max(low, i);
            high += i;
        }

        while (low < high){
            int mid = low + (high - low)/2;
            if (canShip(weights, days, mid)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
int main()
{
    fast_io

    return 0;
}