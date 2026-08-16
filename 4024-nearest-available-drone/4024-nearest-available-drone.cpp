class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int MIN = INT_MAX;
        int index = 0;
        for(int i = 0;i<drones.size();i++){
            if(abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1])<=drones[i][2]){
                if(abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1])<MIN){
                    MIN = abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1]);
                    index = i;
                }
            }
        }
        if(MIN == INT_MAX){
            index = -1;
        }
        return index;
    }
};