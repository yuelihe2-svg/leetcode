class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int cur=0;
        int swap;
        for(;cur<=j;){
            if(nums[cur]==0){
                swap=nums[i];
                nums[i]=nums[cur];
                nums[cur]=swap;
                cur++;
                i++;
            }
            else if(nums[cur]==1){
                cur++;
            }
            else if(nums[cur]==2){
                swap=nums[j];
                nums[j]=nums[cur];
                nums[cur]=swap;
                j--;
            }
        }
    }
};
