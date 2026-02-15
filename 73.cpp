class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowlen = matrix.size();
        int collen = matrix[0].size();
        int m = -1021;
        for(int i=0; i< rowlen; i++){
            for(int j=0; j< collen; j++){
                if(matrix[i][j] == 0){
                    for(int c=0 ; c<collen; c++){
                        if(matrix[i][c] != 0){
                            matrix[i][c] = m;
                        }
                    }
                    for(int r=0; r< rowlen; r++){
                        if(matrix[r][j] != 0){
                            matrix[r][j] = m;
                        }
                    }
                }
            }
        }
        for(int i=0; i<rowlen; i++){
            for(int j=0; j< collen; j++){
                if(matrix[i][j] == m){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
