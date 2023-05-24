#define LL long long
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<LL,LL>> v;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<LL,vector<LL>,greater<LL>> pq;
        LL ans=0,curr=0;
        for(int i=n-1;i>=0;i--){
            if(pq.size()<k){
                curr+=v[i].second;
                pq.push(v[i].second);
            }
            else{
                if(pq.top()<v[i].second){
                    curr-=pq.top();
                    pq.pop();
                    pq.push(v[i].second);
                    curr+=v[i].second;
                }
            }
            if(pq.size()==k){
                ans=max(ans,curr*v[i].first);
            }
        }
        return ans;
    }
};