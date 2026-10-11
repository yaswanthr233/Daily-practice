class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        int tmp[m+n];
        while(i<=m-1 && j<=n-1){
            if(nums1[i] <= nums2[j]){
                tmp[k] = nums1[i];
                i++;
            } else {
                tmp[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<=m-1){
            tmp[k] = nums1[i];
            i++;
            k++;
        }
        while(j<=n-1){
            tmp[k] = nums2[j];
            j++;
            k++;
        }
        for(int c=0;c<m;c++){
            nums1[c] = tmp[c];
        }
        for(int c=m;c<m+n;c++){
            nums1[c] = tmp[c];
        }
    }
};