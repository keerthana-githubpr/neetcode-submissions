class Solution {
public:
    bool isAnagram(string a, string b){
        if(a.size()!=b.size()){
            return false;
        }
        // map<char,int> store;
        // for(auto it:a){
        //     store[it]++;
        // }
        // for(auto it:b){
        //     if(store.find(it)==store.end()){
        //         return false;
        //     }else{
        //         store[it]--;
        //         if(store[it]<0){
        //             return false;
        //         }
        //     }
        // }
        // for(auto it:store){
        //     if(it.second>0){
        //         return false;
        //     }
        // }
        // return true;

        vector<int> m1(26,0);
        vector<int> m2(26,0);
        for(auto it:a){
            m1[it-'a']++;
        }
        for(auto it:b){
            m2[it-'a']++;
        }
        if(m1==m2){
            return true;
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> store;
        for(auto it:strs){
            string temp = it;
            vector<int> count(26,0);
            for(auto c:it){
                count[c-'a']++;
            }
            if(store.find(count)!=store.end()){
                store[count].push_back(temp);
            }else{
                store[count]={temp};
            }
        }
        for(auto it:store){
            ans.push_back(it.second);
        }

        return ans;
    }
};
