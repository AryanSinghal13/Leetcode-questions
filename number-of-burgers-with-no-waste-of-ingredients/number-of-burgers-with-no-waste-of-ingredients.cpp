class Solution {
public:
    vector<int> numOfBurgers(int to, int ch) {
        if(to%2!=0) return {};
        //4a+2b=to
        //a+b=ch
        //a=ch-b->b=ch-a,,,4a=to-2ch+2a,,,2a=to-2ch
        //2b=to-4(ch-b)->6b=to-4ch 
        int a,b;
        a=(to-(2*ch))/2;
        b=ch-a;
        if(a>=0&&b>=0) return {a,b};
        return {};
    }
};