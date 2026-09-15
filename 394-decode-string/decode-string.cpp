class Solution {
public:
    string decodeString(string s) {
        stack<int> numbers;
        stack<string> strings ;
        string current="";
        int num=0;
        for(char ch : s ){
            if (isdigit(ch)) {
                num=num*10+(ch-'0');
            }
            else if( ch == '[') {
                numbers.push(num);
                strings.push(current);

                num=0;
                current="";
            }
            else if (ch==']'){
                int a =numbers.top();
                numbers.pop();
                string b = strings.top();
                strings.pop();

                string temp="";
                for(int i =0;i<a;i++) {
                    temp=temp+current;
                }
                current=b+temp;
            }
              else {
                    current += ch; }
              }
        
        return current;
        
    }
};