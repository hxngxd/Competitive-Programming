#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 0;
        if (n==2) return 1;
        int dp[n];
        dp[0] = 0;
        dp[1] = 1;
        for (int i=2;i<n;i++){
            int step = 0;
            for (int j=i-2;j>=0;j--){
                if (i <= j+nums[j]){
                    cout << i << " " << j << " ";
                    step+=2;
                }
            }
            cout << endl;
            dp[i] = min(dp[i-1]+1, step);
        }
        cout << endl;
        for (auto i : dp){
            cout << i << " ";
        }
        return dp[n-1];
    }
};
int main(){
    Solution sol;
    vector<int> nums{2,3,1,1,4};
    cout << sol.jump(nums);
    return 0;
}



