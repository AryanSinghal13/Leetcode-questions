class Solution {
public:
    double dfs(string i,string j,unordered_set<string>&vis,unordered_map<string,vector<pair<string,double>>>& g)
    {
        if(g.find(i)==g.end()) return -1;
        if(i==j) return 1;
        for(auto node:g[i])
        {
            if(vis.count(node.first)) continue;
            vis.insert(node.first);
            double r=dfs(node.first,j,vis,g);
            if(r!=-1) return r*node.second;
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n=equations.size();
        unordered_map<string,vector<pair<string,double>>> g;
        for(int i=0;i<n;i++){
            string u=equations[i][0];
            string v=equations[i][1];
            double val=values[i];
            g[u].push_back({v,val});
            g[v].push_back({u,(double)1/val});
        }
        vector<double> res;
        for(int i=0;i<queries.size();i++){
            unordered_set<string>vis;
            res.push_back(dfs(queries[i][0],queries[i][1],vis,g));
        }
        return res;
    }
};