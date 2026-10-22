class RecentCounter {
public:
queue<int> a ;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int limit=t-3000;
            a.push(t);
            while(!a.empty() && a.front()<limit) {
                a.pop();
            }
        
        
    
    return a.size();}

};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */