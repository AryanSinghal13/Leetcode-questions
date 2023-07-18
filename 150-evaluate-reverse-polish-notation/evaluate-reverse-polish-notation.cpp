class Solution {
public:
    int evalRPN(vector<string>& tok) {
        int n=tok.size();
        stack<int> s;
        int c=0;
        for(auto it:tok)
        {
            if(it == "+")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                x+=y;
                s.push(x);
            }
            else if(it == "-")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                y-=x;
                s.push(y);
            }
            else if(it == "*")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                x*=y;
                s.push(x);
            }
            else if(it == "/")
            {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                y/=x;
                s.push(y);
            }
            else
            {
                bool sign = false;
                int x = 0;
                for(auto i : it){
                    if(i == '-'){
                        sign = true;
                        continue;
                    }
                    int y = int(i) - 48;
                    x = 10*x + y;
                }
                if(sign) x *= -1;
                s.push(x);
            }
        }
        return s.top();
    }
};