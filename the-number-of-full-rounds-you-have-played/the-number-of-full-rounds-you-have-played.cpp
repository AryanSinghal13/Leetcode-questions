class Solution {
public:
    int numberOfRounds(string ls, string le) {
        int s=60*stoi(ls.substr(0,2))+stoi(ls.substr(3));
        int f=60*stoi(le.substr(0,2))+stoi(le.substr(3));
        if(s>f) f+=60*24;
        return max(0,f/15-(s+14)/15);
    }
};