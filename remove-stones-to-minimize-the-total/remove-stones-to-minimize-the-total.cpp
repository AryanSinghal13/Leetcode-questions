class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(),piles.end());
        while(k--)
        {
            double x=pq.top();
            pq.pop();
            pq.push(ceil(x/2));
        }
        int s=0;
        while(!pq.empty())
        {
            s+=pq.top();
            pq.pop();
        }
        return s;
    }
};