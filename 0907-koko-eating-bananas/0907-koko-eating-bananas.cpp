class Solution {
public:

    int calculateCeil(int mid,vector<int>&piles)
    {
        long long ans = 0;
        for(int i=0;i<piles.size();i++)
        {
            double temp = double(piles[i]);
            double midd = double(mid);
            ans += (long long)ceil(temp/midd);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        long long s = 1;
        long long e = 10000000000;
        long long ans;

        while(s <= e)
        {
            long long mid = s + (e-s)/2;

            long long temp = calculateCeil(mid,piles);

            if(temp <= h)
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