class Solution {
public:
    void rev(vector<int>& a,int i,int j){
        if(i>=j) return;
        swap(a[i],a[j]);
        rev(a,i+1,j-1);
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        k = n-k;
        rev(nums,0,k-1);
        rev(nums,k,nums.size()-1);
        rev(nums,0,nums.size()-1);
    }
};