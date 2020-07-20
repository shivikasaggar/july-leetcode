//Given a non-empty array of integers, return the k most frequent elements.

bool compare(pair<int, int> p1, pair<int, int> p2) 
{ 
    
    if (p1.second == p2.second) 
        return p1.first > p2.first; 
    return p1.second > p2.second; 
} 
  
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int, int> >res (m.begin(), m.end()); 
  
   
    sort(res.begin(), res.end(), compare); 
        vector<int> ans;
    for (int i = 0; i < k; i++) {
        ans.push_back(res[i].first);
    }
    return ans;
}
};
