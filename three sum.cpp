
//Given an array nums of n integers, are there elements 
//a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int> >v;
        if(nums.size()<3){
            return {};
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=0&&nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    v.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1]){
                    l++;
                    }
                }
                else if(nums[i]+nums[l]+nums[r]>0)
                r--;
                else
                l++;
            }
        }
        return v;
    }
};
