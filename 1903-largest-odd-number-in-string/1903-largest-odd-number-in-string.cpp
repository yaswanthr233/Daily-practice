class Solution {
public:
    string largestOddNumber(string num) {
        string r="";
        int idx=-1;
        for(int i=num.size()-1;i>=0;i--){
            int n = num[i] - '0';
            if(n%2 != 0){
                idx = i;
                break;
            }
        }
        for(int i=0;i<=idx;i++){
            r += num[i];
        }
        return r;
    }
};