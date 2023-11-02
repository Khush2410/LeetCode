class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        m[0] = 1;
        int count = 0;

        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]] = 1;
        }

        for(int i=0;i<10000;i++)
        {
            if(m[i] == 0)
            {
                count++;
                if(count == k)
                return i;
            }
        }
        return -1;
    }
};