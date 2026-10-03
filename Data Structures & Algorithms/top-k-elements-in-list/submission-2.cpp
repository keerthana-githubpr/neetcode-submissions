class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(auto it:nums){
            if(freq.find(it)==freq.end()){
                freq[it]=1;
            }else{
                freq[it]++;
            }
        }
        
        vector<vector<int>> store(nums.size()+1);
        for(auto it:freq){
            store[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=store.size()-1;i>0;i--){
            for(int n:store[i]){
                ans.push_back(n);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
