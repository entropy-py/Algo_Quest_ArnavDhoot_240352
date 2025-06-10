class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,a=0;
        for(i=(nums.size())-1;i>0;i--){
            for(j=0;j<i;j++){
                if(nums[j]>=nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }

        }
        for(int k=0;k<nums.size();k++){
            cout<<nums[k]<<',';
        }
    }
};