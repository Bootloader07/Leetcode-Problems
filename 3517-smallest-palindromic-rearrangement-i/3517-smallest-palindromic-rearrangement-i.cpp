class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        for(char x : s){
            freq[x - 'a']++;
        }
        string left;
        string middle;
        
        for(int i = 0;i<26;i++){
            char ch = i + 'a';
            left.append(freq[i]/2,ch);
            if(freq[i]%2==1){
                middle = ch;
            }
        }
        string right = left;
        reverse(right.begin(),right.end());
        return left + middle + right;
    }
};