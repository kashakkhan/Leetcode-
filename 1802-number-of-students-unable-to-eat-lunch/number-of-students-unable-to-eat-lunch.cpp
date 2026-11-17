class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> a ;
        for(int i =0;i<students.size();i++) {
            a.push(students[i]);
        }
        int i =0;
        int count=0;
        while(!a.empty() && count<a.size()) {
            if(a.front()==sandwiches[i]) {
                a.pop();
                i++;
                count=0;
            }
            else {
                int x = a.front();
                a.pop();
                a.push(x);
                count++;
            }
        }
        return a.size();
        
    }
};