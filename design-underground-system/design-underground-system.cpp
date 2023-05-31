class UndergroundSystem {
public:
    map<int,pair<int,string>> m1;
    map<string,pair<int,int>> m2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m1[id]={t,stationName};
    }
    
    void checkOut(int id, string stationName, int t) {
        string d=m1[id].second+" "+stationName;
        auto &i=m2[d];
        i.first+=t-m1[id].first;
        i.second++;
    }
    
    double getAverageTime(string s, string e) {
        string r=s+" "+e;
        return (double)m2[r].first/m2[r].second;
    }
};
/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */