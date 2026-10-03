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
        vector<pair<int,int>> temp;
        for(auto it:freq){
            temp.push_back({it.second,it.first});
        }
        sort(temp.begin(),temp.end(),greater<pair<int,int>>());

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
