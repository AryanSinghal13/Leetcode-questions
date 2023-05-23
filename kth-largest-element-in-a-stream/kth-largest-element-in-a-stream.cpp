class KthLargest {
public:
    int x;
    vector<int> v;
    KthLargest(int k, vector<int>& nums) {
       x= k;
        sort(nums.begin(), nums.end());
        v = nums; 
    }
    
    int add(int val) {
        int n = v.size();
        for (int i = 0; i < n; i++)
            if (v[i] >= val)
            {
                v.insert(v.begin() + i, val);
                break;
            }
        n++;
        if (v.size() < n)
            v.push_back(val);
        return v[n - x];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */