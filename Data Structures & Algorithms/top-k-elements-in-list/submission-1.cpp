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
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
        for(auto &entry:freq){
            heap.push({entry.second,entry.first});
            if(heap.size()>k){
                heap.pop();
            }
        }

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};
