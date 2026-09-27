class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ss;
        for(auto it:nums){
            if(ss.find(it)!=ss.end()){
                return true;
            }else{
                ss.insert(it);
            }
        }
        return false;
    }
};