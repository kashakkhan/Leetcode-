class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i =0;
        int j =0;
        vector<char> a;
        while ( i < word1.size() && j<word2.size()) {
            a.push_back(word1[i]);
            a.push_back(word2[j]);
            i=i+1;
            j=j+1;

        }
        while (i<word1.size()) {
            a.push_back(word1[i]);
            i=i+1;
            
        }
        while ( j<word2.size()) {
            a.push_back(word2[j]);
            j=j+1;
        }
        string b ;
        for(int i =0;i<a.size();i++){
            b=b+a[i];
        }
        return b ;
        
    }
};