//Given a set of distinct integers, nums, return all possible subsets (the power set).
void helper(vector<int>& nums,vector<int>& s,vector<vector<int> >& ans,int index){
    ans.push_back(s);
    for(int i=index;i<nums.size();i++){
        s.push_back(nums[i]);  
        helper(nums, s, ans, i + 1); 
        s.pop_back(); 
    }
    return;
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>s;
        vector<vector<int> >ans;
        helper(nums,s,ans,0);
        return ans;
    }
};
