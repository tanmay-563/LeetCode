class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            vector<int>k = matrix[i];
            for(int j=0; j< k.size(); j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};
