class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int strt=0,end=nums.size()-1;
        int res=0;
        while (strt<=end)
        {
            int mid=end+(strt-end)/2;
            if (nums[mid]==target){
                return mid;
            }
            else if (nums[mid]>target)
            {
                end=mid-1;
            
            }
            else {
                strt=mid+1;
                
            }
        }
        end++;
        return end;
    }
};
