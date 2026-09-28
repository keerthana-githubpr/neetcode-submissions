class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> store;
        for(int i=0;i<nums.size();i++){
            store.push_back({nums[i],i});
        }
        sort(store.begin(),store.end());
        int start = 0;
        int end = nums.size()-1;
        vector<int> ans = {};
        while(start<end && start<nums.size() && end>=0){
            int sum = store[start].first+store[end].first;
            if(sum==target){
                ans= {store[start].second,store[end].second};
                break;
            }else if(sum>target){
                end--;
            }else{
                start++;
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;

    }
};
