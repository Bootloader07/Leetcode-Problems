class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;

        for(int i = 0;i<s.length();i++){
            if(s[i]=='(' || s[i] == '{' || s[i] == '['){
                Stack.push(s[i]);
            }
            else{
                if(Stack.empty()){
                    return false;
                }
                if((s[i] == ')' && Stack.top() == '(')||
                (s[i] == '}' && Stack.top() == '{')  ||
                (s[i] == ']' && Stack.top() == '[')){
                    Stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        return Stack.empty();
    }
};

