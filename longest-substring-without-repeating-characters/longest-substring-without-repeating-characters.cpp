class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int n=s.size();
        int j=0,i=0;
        set<char> st;
        while(j<n)
        {
            if(st.count(s[j])){
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                }
                if(i!=j)
                {
                    st.erase(s[i]);
                    i++;
                }
            }
            ans=max(ans,j-i+1);
            st.insert(s[j]);
            j++;
        }
        return ans;
    }
};