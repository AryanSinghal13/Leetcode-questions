class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int n=sat.size();
        sort(sat.begin(),sat.end());
        int sum = sat[n-1];
        int val = sat[n-1];
        int max = val;
        for(int i=n-2;i>=0;i--){
            sum += sat[i];
            val += sum;
            if(val > max)
                max = val;
        }
        if (max<0) return 0;
        return max;
    }
};