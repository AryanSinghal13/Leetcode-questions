class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<int> v(n,1e9),ans;
        for(int i=0;i<n;i++){
            auto ub=upper_bound(begin(v),end(v),obstacles[i]);
            ans.emplace_back(ub - v.begin() + 1);
            *ub = obstacles[i];
        }
        return ans;
    }
};