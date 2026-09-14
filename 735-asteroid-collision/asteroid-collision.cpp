class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i =0;i<asteroids.size();i++){
                while (!st.empty() && st.top()>0 && asteroids[i]<0 ){
                    if(abs(asteroids[i]) > abs(st.top())) {
                        st.pop();}                        
                     
                    else if(abs(asteroids[i]) == abs(st.top())) {
                        st.pop();
                        asteroids[i] = 0;
                        break;}
                    
            else {
                asteroids[i] = 0;
                break;}}
            
            if(asteroids[i] != 0) {
            st.push(asteroids[i]);
            }
            }
    
        vector<int>an;
        while (!st.empty()){
            an.push_back(st.top());
            st.pop();
        }
        reverse(an.begin(),an.end());
        return an;

    }
};