#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<int> nums{1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 3;
    int cur_sum = accumulate(nums.begin(), nums.begin()+k, 0);
    int best = INT_MIN;
    for (int i=1;i<=nums.size()-k;i++){
        cur_sum -= nums[i-1];
        cur_sum += nums[i+k-1];
        cout << cur_sum << endl;
        best = max(best, cur_sum);
    }
    cout << best;
    return 0;
}
