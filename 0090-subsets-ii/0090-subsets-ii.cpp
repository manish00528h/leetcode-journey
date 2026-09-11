class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> subset;

        sort(nums.begin(), nums.end());

        solve(0, nums, subset, ans);

        return ans;
    }

    void solve(int index, vector<int>& nums, 
               vector<int>& subset, vector<vector<int>>& ans) {

        ans.push_back(subset);

        for (int i = index; i < nums.size(); i++) {

            // Same level par duplicate ko skip karo
            if (i > index && nums[i] == nums[i - 1])
                continue;

            // Pick
            subset.push_back(nums[i]);

            // Next level
            solve(i + 1, nums, subset, ans);

            // Backtrack
            subset.pop_back();
        }
    }
};