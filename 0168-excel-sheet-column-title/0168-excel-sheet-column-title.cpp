class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber--){
            long rem = (long)columnNumber%26;
            char ch = 'A' + rem;
            ans += ch;
            columnNumber = (long)columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};