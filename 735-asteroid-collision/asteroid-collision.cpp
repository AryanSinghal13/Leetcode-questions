class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.empty()||ast[i]>0) s.push(ast[i]);
            else
            {
                while(!s.empty()&&s.top()>0&&s.top()<abs(ast[i])) s.pop();
                if(!s.empty()&&s.top()==abs(ast[i])) s.pop();
                else
                {
                    if(s.empty()||s.top()<0) s.push(ast[i]);
                }
            }
        }
        vector<int> r(s.size(),0);
        int size = s.size();
        while(!s.empty()){
            r[--size] = s.top();
            s.pop();
        }
        return r;
    }
};