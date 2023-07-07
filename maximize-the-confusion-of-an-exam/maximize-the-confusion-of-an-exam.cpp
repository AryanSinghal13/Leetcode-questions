class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int maxi=0;
        int j=0;
        map<char,int> m;
        for(int i=0;i<ans.size();i++)
        {
            m[ans[i]]++;
            maxi=max(maxi,m[ans[i]]);
            if(i-j+1>maxi+k)
            {
                m[ans[j]]--;
                j++;
            }
        }
        return ans.size()-j;
    }
};