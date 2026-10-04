class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto c:s){
            if(c>='A' && c<='Z'){
                temp+='a'+c-'A';
            }
            else if(c>='a' && c<='z'){
                temp+=c;
            }else if(c>='0' && c<='9'){
                temp+=c;
            }
        }
        cout<<temp;
        string rev = temp;
        reverse(rev.begin(),rev.end());
        if(temp==rev){
            return true;
        }
        return false;
    }
};
