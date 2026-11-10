class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int m=nums1.size()-1,n=nums2.size()-1;
        while(i<=m && j<=n){
            if(nums1[i] <= nums2[j]){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    j++;
                }
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }

};