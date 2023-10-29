class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s = 0;
        int e = nums.size()-1;
        int ans = INT_MAX;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            ans = min(ans,nums[mid]);

            //left part sorted hai
            if(nums[s] <= nums[mid])
            {
                if(nums[s] > nums[e])
                {
                    s = mid + 1;
                }

                else{
                    e = mid - 1;
                }
            }

            else{
                if(nums[mid] > nums[mid-1])
                {
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
        }
        return ans;
    }
};