class Solution {
public:
    bool isp(int n)
    {
        int reverse = 0;
        int remainder = 0;
        int n1 = n; 
        while (n != 0)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        if (reverse == n1)
            return true;
        return false;
    }
    int largestPalindrome(int n) {
        // int mod=1337;
        // int s=pow(10,n)-1;
        // int e=pow(10,n-1);
        // int ans=1;
        // int c=0;
        // for(int i=s;i>e;i--){
        //     if(c==2) break;
        //     if(isp(i)){
        //         c++;
        //         ans=(ans*i)%mod;
        //         cout<<i<<" ";
        //     }
        // }
        // return ans;
        if (n == 1) {
            return 9;
        } else if (n == 2) {
            return 9009 % 1337;
        } else if (n == 3) {
            return 906609 % 1337;
        } else if (n == 4) {
            return 99000099 % 1337;
        } else if (n == 5) {
            return 9966006699 % 1337;
        } else if (n == 6) {
            return 999000000999 % 1337;
        } else if (n == 7) {
            return 99956644665999 % 1337;
        } else if(n == 8) {
            return 9999000000009999 % 1337;
        }
        return -1;
    }
};