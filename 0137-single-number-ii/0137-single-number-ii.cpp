class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<32;i++){
            int bitSum = 0;
            for(int j=0;j<nums.size();j++){
                bitSum += ((nums[j] >> i)&1);
            }
            int bit = bitSum%3;
            ans = ans | (bit << i);
        }
        return ans;
    }
};