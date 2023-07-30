class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int tar) {
        int c=0;
        int n=h.size();
        for(int i=0;i<n;i++)
        {
            if(h[i]>=tar) c++;
        }
        return c;
    }
};