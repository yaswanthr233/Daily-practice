class Solution {
public:
    void backtrack(vector<vector<int>>& result,vector<int>& tmp,vector<int> arr,int remain,int start){
        if(remain < 0){
            return;
        }
        if(remain == 0){
            result.push_back(tmp);
            return;
        }
        for(int i=start;i<arr.size();i++){
            if(i>start && arr[i] == arr[i-1]){
                continue;
            }
            tmp.push_back(arr[i]);
            backtrack(result,tmp,arr,remain - arr[i],i+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> tmp;
        sort(candidates.begin(),candidates.end());
        backtrack(result,tmp,candidates,target,0);
        return result;
    }
};