class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> v;
    v=nums;            
     int i=0,j=nums.size()-1;
    sort(nums.begin(),nums.end());
    while(i<j)
    {
        if(nums[i]+nums[j]==target)
        {
            nums.clear();
            nums.push_back(nums[i]);
            nums.push_back(nums[j]);
            break;
        }
        if(nums[i]+nums[j]>target)
        {
            j--;
        }   
        if(nums[i]+nums[j]<target)
        {
            i++;
        }   
    }

    auto it=find(v.begin(),v.end(),nums[0]);
        int pos1=it-v.begin();
                v[pos1]=-1;

        it=find(v.begin(),v.end(),nums[1]);
        int pos2=it-v.begin();
        
        nums.clear();
        nums.push_back(pos1);
        nums.push_back(pos2);
        return nums;
    }
};