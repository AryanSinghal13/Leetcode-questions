class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5) return false;
        int c1=0,c2=0,c3=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5) c1++;
            else if(bills[i]==10){
                if(c1>0) c1--,c2++;
                else return false;
            }
            else if(bills[i]==20)
            {
                if(c2>0&&c1>0){
                    c1--,c2--,c3++;
                }
                else if(c1>=3) c1-=3,c3++;
                else return false;
            }
        }
        return true;
    }
};