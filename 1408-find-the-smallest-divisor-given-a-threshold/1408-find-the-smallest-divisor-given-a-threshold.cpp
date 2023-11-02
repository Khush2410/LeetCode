class Solution {
public:


    bool isPossible(vector<int> &nums,int mid ,int threshold)
    {
        int temp = 0;
        for(int i=0;i<nums.size();i++)
        {
            double x = nums[i];
            double y = mid;
            temp += ceil(x/y);
        }

        return temp <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int ans = -1;

        for(int i=0;i<nums.size();i++)
        {
            mini = min(nums[i],mini);

            maxi = max(nums[i],maxi);
        }

        int s = 1;
        int e = maxi;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(isPossible(nums,mid,threshold))
            {
                ans = mid;
                e = mid - 1;
            }

            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};