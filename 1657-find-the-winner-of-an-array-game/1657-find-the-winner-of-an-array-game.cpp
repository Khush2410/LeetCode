class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        unordered_map<int,int> m;

        int i=0;
        int j = 1;

        while(i < arr.size() && j < arr.size())
        {
            if(arr[i] > arr[j])
            {
                m[arr[i]]++;
            }

            else if(arr[j] > arr[i])
            {
                m[arr[j]]++;
                i = j;
            }

            if(m[arr[i]] == k)
            return arr[i];

            j++;
        }

        return *max_element(arr.begin(),arr.end());
    }
};