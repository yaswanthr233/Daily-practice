class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones=0,zeros=0;
        int onesCnt=0,zerosCnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                zeros=0;
                ones++;
                onesCnt = max(ones,onesCnt);
            }
            if(s[i] == '0'){
                ones=0;
                zeros++;
                zerosCnt = max(zeros,zerosCnt);
            }
        }
        zerosCnt = max(zerosCnt,zeros);
        onesCnt = max(onesCnt,ones);
        if(onesCnt > zerosCnt) return true;
        return false;
    }
};