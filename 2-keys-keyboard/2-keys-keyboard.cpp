class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0;
        int s=0,i=2;
        while(i<=n)
        {
            if(n%i==0) s+=i,n/=i;
            else i++;
        }
        return s;
    }
};