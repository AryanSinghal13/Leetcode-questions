class Solution {
public:
    string sortVowels(string s) {
        char t[s.size()];
        int n=s.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
            t[j++]=s[i];
        }
        sort(t,t+j);
        j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u') s[i]=t[j++];
        }
        return s;
    }
};