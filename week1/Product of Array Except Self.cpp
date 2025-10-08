class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        int i=1;
        answer[0]=1;
        for(i=1;i<nums.size();i++){
            answer[i]=answer[i-1]*nums[i-1];
        }
        int right=1;
        int j=nums.size();
        for(j=nums.size()-1;j>=0;j--){
            answer[j]=answer[j]*right;
            right=right*nums[j];
        }
        return answer;
    }

};
