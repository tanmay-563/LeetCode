class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0 , high = n*m -1;
        while(low <= high){
            int mid = (low+high) / 2;
            int row = mid/m ; 
            int col = mid%m ;
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] < target){
                low = mid +1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};

||||||||||||||||||||||||||||||||||

    
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
