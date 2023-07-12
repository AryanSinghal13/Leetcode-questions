class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int> m;
        int n=arr.size();
        for(int i=0;i<n;i++) m[arr[i]]++;
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]!=0&&m[2*arr[i]]!=0)
            {
                m[arr[i]]--;
                m[2*arr[i]]--;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]!=0) return 0;
        }
        return 1;
    }
};