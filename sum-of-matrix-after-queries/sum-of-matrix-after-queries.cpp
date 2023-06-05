class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
       long long ans=0;
       vector<int>r(n,0),c(n,0);
       int cnt1=0,cnt2=0;
       for(int i=q.size()-1;i>=0;i--)
       {
           int ind=q[i][1];
           int val=q[i][2];
           if(q[i][0]==0){
               if(r[ind]==0){
                   ans+=val*(n-cnt2);
                   r[ind]=1;
                   cnt1++;
               }
           }
           else if(q[i][0]==1){
               if(c[ind]==0){
                   ans+=val*(n-cnt1);
                   c[ind]=1;
                   cnt2++;
               }
           }
           if(cnt1+cnt2==2*n) return ans;
       }
       return ans;
    }
};