class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0 ;
        double average=0 ;
        double max=-DBL_MAX;
        int sum=0;
        for(int right =0;right<nums.size();right++) {
            if (nums.size()==1){
                return nums[0];
            }
            sum=sum+nums[right] ;
            if ( right-left+1 ==k ) {
                average=double(sum)/k ;
                if ( average > max) {
                    max=average;
                } 
                sum=sum-nums[left];
                left++;

            }
        }
        return max;
        
    }
};