class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n=target.size();
        priority_queue<int> pq;
        long s=0;
        for(int i=0;i<n;i++){
            pq.push(target[i]);
            s+=target[i];
        }
        while(pq.top()!=1){
            s-=pq.top();
            if(s==0||s>=pq.top()) return false;
            int top=pq.top()%s;
            if(s!=1&&top==0) return false;
            pq.pop();
            pq.push(top);
            s+=top;
        }
        return true;
    }
};