class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        int count=1;
        int max_count=1;
        if (nums.size()==0) {
            return 0;
        }
        for(int i =1;i<nums.size();i++) {
            if (nums[i]==nums[i-1]+1) {
                count++;
            }
            else if (nums[i]!=nums[i-1]) {
                count=1;
            }
            if (count>max_count) {
                max_count=count;
            }
        }
        return max_count;
        
    }*/
    int longest = 0;
    unordered_set<int> st(nums.begin(),nums.end());
    for( auto x : st ){
        if (st.find(x-1) == st.end()) {
            int current= x ;
            int count = 1 ;

            while ( st.find(current+1)!=st.end()) {
                current++;
                count++;
            }
            longest = max(count , longest);
        }}
    
    return longest;
                
    }
};