class Solution {
public:
    vector<vector<int>> combinations;
    vector<vector<int>> permute(vector<int> nums, int limit=0) {
        if(limit>=nums.size()){
            combinations.push_back(nums);
            
            return {};
            
        }
        for(int i=limit;i<nums.size();i++)
        {
            swap(nums[i], nums[limit]);
            permute(nums,  limit+1);
            swap(nums[i], nums[limit]);
        }
        return combinations;
    }
};