class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        int sum;
        while(left!=right){
            sum=numbers[left]+numbers[right];
            if(sum==target){
                return {left+1,right+1};
            }
            else if(sum>target){
                right--;
            }
            else if(sum<target){
                left++;
            }

        }

return {};
    }
};