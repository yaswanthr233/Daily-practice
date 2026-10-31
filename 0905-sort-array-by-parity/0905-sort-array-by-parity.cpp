class Solution {
public:
    void merge_sort(vector<int>& nums,int l,int m,int h){
        int i=l,j=m+1,k=0;
        int a[h-l+1];
        while(i<=m){
            if(nums[i]%2 == 0){
                a[k] = nums[i];
                k++;
                
            }i++;
        }
        while(j<=h){
            if(nums[j]%2 == 0){
                a[k] = nums[j];
                
                k++;
            }j++;
        }
        i=l,j=m+1;
        while(i<=m){
            if(nums[i]%2 != 0){
                a[k] = nums[i];
                
                k++;
            }i++;
        }
        while(j<=h){
            if(nums[j]%2 != 0){
                a[k] = nums[j];
                
                k++;
            }j++;
        }
        for(int c=0;c<h-l+1;c++){
            nums[l+c] = a[c];
        }
    }
    void ms(vector<int>& nums,int l,int h){
        if(l>=h) return;
        int m=(l+h)/2;
        ms(nums,l,m);
        ms(nums,m+1,h);
        merge_sort(nums,l,m,h);
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() <= 1) return nums;
        ms(nums,0,nums.size()-1);
        return nums;
    }
};