class Solution {
public:

    bool isPossible(vector<int>& bloomDay,int mid,int m,int k)
    {
        int count = 0;
        int ans = 0;

        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i] <= mid)
            {
                count++;
            }

            else{
                ans += count/k;
                count = 0;
            }
        }
        ans += count/k;
        return ans >= m;
    }

   
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int maxi = INT_MIN;
        int mini = bloomDay[0];
        int ans = -1;

        long long x = m;
        long long y = k;

        if(x*y > n)
        return -1;

        for(int i=0;i<n;i++)
        {
            maxi = max(bloomDay[i],maxi);
        }

        for(int i=0;i<n;i++)
        {
            mini = min(bloomDay[i],mini);
        }

        if(mini == maxi)
        {
            return mini;
        }

        int s = mini;
        int e = maxi;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(isPossible(bloomDay,mid,m,k))
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