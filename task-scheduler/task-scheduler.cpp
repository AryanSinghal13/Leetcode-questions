class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> m;
        int c=0;
        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
            c=max(c,m[tasks[i]]);
        }
        int r=(c-1)*(n+1);
        for(auto i:m) if(i.second==c) r++;
        return max((int)tasks.size(),r);
    }
};