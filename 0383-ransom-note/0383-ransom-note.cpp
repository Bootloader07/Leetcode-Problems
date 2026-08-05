class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> freqr = {};
        unordered_map<int,int> freqm = {};
        for(int x : magazine){
            freqm[x]++;
        }
        
        for(char x : ransomNote){
            if(freqm[x]==0){
                return false;
            }else{
                freqm[x]--;
            }
        }
        return true;
    }
};