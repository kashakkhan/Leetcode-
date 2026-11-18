class Solution {
public:
queue<int> a ;
queue<int> b ;
    string predictPartyVictory(string senate) {
       for(int i = 0; i < senate.size(); i++) {
            if(senate[i] == 'R') {
            a.push(i);
           }
            else {
            b.push(i);                }
                                        }
         
        while(!a.empty() && !b.empty()) {
            int x = a.front();
            a.pop();

            int y = b.front();
            b.pop();

            if(x<y) {
                a.push(x+senate.size());

            }
            else {
                b.push(y+senate.size());

            }
        }
        if(a.empty()){
            return "Dire";
        }
        else{
            return "Radiant";
        }
        }
};