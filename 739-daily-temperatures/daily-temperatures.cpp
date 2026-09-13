class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> a ;
        vector<int> an(temperatures.size(),0);
        for(int i =0;i<temperatures.size();i++)
{
    while(!a.empty() && temperatures[i]>temperatures[a.top()]) {
        an[a.top()]=i-a.top();
        a.pop();
    }
    a.push(i);
} 
return an;       
    }
};